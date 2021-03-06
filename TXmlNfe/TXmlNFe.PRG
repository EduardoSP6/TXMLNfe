/*
*********************************************************************************************************
CLASSE: TXmlNfe
DESENVOLVEDOR: Eduardo P. Sales / E-mail: eduardo.sp6@gmail.com , eduardo.sales_dveloper@hotmail.com
DATA  : 10/12/2014
FUNCAO: Efetuar download da NF-e direto do webservice da Receita Federal
OBS  .: H� um prazo para download que � de 30 dias, a contar da data da autoriza��o da NF-e.
        Elaborado com base na Nota T�cnica 2012/002 - Manifesta��o do Destinat�rio 
*********************************************************************************************************
*/

#include "Fivewin.ch"
#include "common.ch"
#include "hbclass.ch"
#include "hbxml.ch"


CLASS TXmlNfe

   DATA CAPICOM_STORE_OPEN_READ_ONLY                 INIT 0           // Somente Smart Card em Modo de Leitura
   DATA CAPICOM_CURRENT_USER_STORE                   INIT 2
   DATA CAPICOM_MEMORY_STORE                         INIT 0
   DATA CAPICOM_STORE_OPEN_MAXIMUM_ALLOWED           INIT 2
   DATA CAPICOM_CERTIFICATE_FIND_SHA1_HASH           INIT 0           // Retorna os Dados Criptografados com Hash SH1
   DATA CAPICOM_CERTIFICATE_FIND_EXTENDED_PROPERTY   INIT 6
   DATA CAPICOM_CERTIFICATE_FIND_TIME_VALID          INIT 9           // Retorna Certificados V�lidos
   DATA CAPICOM_CERTIFICATE_FIND_KEY_USAGE           INIT 12          // Retorna Certificados que cont�m dados.
   DATA CAPICOM_DIGITAL_SIGNATURE_KEY_USAGE          INIT 0x00000080  // Permitir o uso da Chave Privada para assinatura Digital
   DATA CAPICOM_AUTHENTICATED_ATTRIBUTE_SIGNING_TIME INIT 0           // Este atributo cont�m o tempo em que a assinatura foi criada.
   DATA CAPICOM_INFO_SUBJECT_SIMPLE_NAME             INIT 0           // Retorna o nome de exibi��o do certificado.
   DATA CAPICOM_ENCODE_BASE64                        INIT 0           // Os dados s�o guardados como uma string base64-codificado.
   DATA CAPICOM_E_CANCELLED                          INIT -2138568446 // A opera��o foi cancelada pelo usu�rio.
   DATA CERT_KEY_SPEC_PROP_ID                        INIT 6
   DATA CAPICOM_CERT_INFO_ISSUER_EMAIL_NAME          INIT 0
   DATA SIG_KEYINFO                                  INIT 2

   DATA cSerialCert
	DATA cAmbiente  INIT "1"    // Identifica��o do Ambiente: 1=Produ��o /2=Homologa��o
	DATA cUf        INIT "33"   // codigo da UF: S�o Paulo = 35 ; Rio de Janeiro = 33
	DATA cXMLFile
   DATA cPastaSchemas  // pasta dos arquivos XSD para validar o schema do arquivo xml
	DATA cVersaoDados  INIT "1.00" //  versao do leiaute da Nf-e. Nesta versao � : 1.00
	DATA cChave
	DATA cCnpj
	DATA cServ INIT "DOWNLOAD NFE"
	
   // Metodos de manipulacao de Certificado digital utilizando CAPICOM.dll
   METHOD escolheCertificado(lTentaRegistrar)
   METHOD pegaObjetoCertificado(cSerialCert)
   METHOD pegaCNCertificado()
   METHOD pegaPropriedadesCertificado(cSerialCert)
   METHOD UAC(nAtivar)
   METHOD setRegVar(nKey, cRegKey, cSubKey, uValue)
	// -----------------------------------------------//
   
	METHOD NEW(tAmb, codUf, cVer, cKey, cDoc)
   METHOD END()
   
   METHOD CriaXmlEnvio()
   METHOD BaixarXmlNfe() 
   
ENDCLASS

********************************************************************************
METHOD NEW(tAmb, codUf, cVer, cKey, cDoc) CLASS TXmlNfe

	::cAmbiente    := tAmb
	::cUf          := codUf
	::cVersaoDados := cVer
	::cChave       := cKey
	::cCnpj        := cDoc  // CNPJ
	
RETURN SELF

********************************************************************************
METHOD END() CLASS TXmlNfe

	DeleteObject( ::TXmlNfe )

RETURN NIL

********************************************************************************
METHOD escolheCertificado(lTentaRegistrar) CLASS TXmlNfe

	*Retorna o numero de serie do certificado                                    *
	*Baseado na fun��o PEGA_CERTIFICADO do Leonardo Machado - 03/05/2010 sygecom *

	LOCAL oCertSelecao, oCertificados, oStore, oCertificates, msgErro := "", aRetorno := hash()
	LOCAL cMsgErro:= ""
  
   IF lTentaRegistrar = Nil
      lTentaRegistrar := .F.
   ENDIF

   TRY
     oCertificates := xhb_CreateObject( "CAPICOM.Certificates" )
   CATCH
      IF lTentaRegistrar
         // Ajuda a instalar automaticamente a capicom.dll
         ::UAC( 0 )
         iif( file( "CAPICOM.DLL" ), RegisterServer( "CAPICOM.DLL" ), msgErro := "Nao foi instalado CAPICOM.DLL" )
         ::UAC( 1 )
      ENDIF
      aRetorno['OK']       := .F.
      aRetorno['MsgErro']  := IF(EMPTY(cMsgErro),"Registrado CAPICOM tente novamente",cMsgErro)
      RETURN(aRetorno)
   END
   TRY
      oStore := xhb_CreateObject( "CAPICOM.Store")
   CATCH
      IF lTentaRegistrar
	      // Ajuda a instalar automaticamente a capicom.dll
	      ::UAC( 0 )
	      iif( file( "CAPICOM.DLL" ), RegisterServer( "CAPICOM.DLL" ), msgErro := "Nao foi instalado CAPICOM.DLL" )
	      ::UAC( 1 )
	   ENDIF
      aRetorno['OK']       := .F.
      aRetorno['MsgErro']  := IF(EMPTY(cMsgErro),"Registrado CAPICOM tente novamente",cMsgErro)
      RETURN(aRetorno)
   END

	TRY
	  oStore:open(::CAPICOM_CURRENT_USER_STORE,'My',::CAPICOM_STORE_OPEN_MAXIMUM_ALLOWED)
	  oCertificados := oStore:Certificates() // Lista de Certificados
	  oCertSelecao  := oCertificados:Select("Selecione o certificado","Selecione o certificado",.F.)
	  IF oCertSelecao:Count() > 0
        aRetorno['OK']      := .T.
        aRetorno['Serial']  := oCertSelecao:Item(1):SerialNumber
     ELSE
        aRetorno['OK']      := .F.
        aRetorno['MsgErro'] := "Nao conseguiu selecionar nenhum certificado"
	  ENDIF
	CATCH
      aRetorno['OK']       := .F.
      aRetorno['MsgErro']  := "Nao conseguiu selecionar nenhum certificado"
	   Return(aRetorno)
	END
	// Propriedades de Certificados

   oCertSelecao  := Nil
   oCertificados := Nil
   oStore        := Nil
   oCertificates := Nil

Return(aRetorno)

********************************************************************************
METHOD UAC(nAtivar) CLASS TXmlNfe
	* Desabilita o UAC Fun��o Baseda Forum usuario rochinha *

	LOCAL cRunName, cRunKey, cRegKey
   // EnableLUA
   // 0-Desativar
   // 1-Ativar
   cRegValue:= nAtivar
   cRegKey  := "Software\Microsoft\Windows\CurrentVersion\Policies\System"
   cRegRoot := "HKEY_LOCAL_MACHINE"
   ::setRegVar( cRegRoot, cRegKey, "EnableLUA", cRegValue )

RETURN 0

********************************************************************************
METHOD setRegVar(nKey, cRegKey, cSubKey, uValue) CLASS TXmlNfe
	* Grava o registro do aplicativo Fun��o Baseda Forum usuario rochinha *
	LOCAL oReg, cValue
   nKey := IF(nKey == NIL, HKEY_CURRENT_USER, nKey)
   uValue := IF(uValue == NIL, "", uValue)
	//oReg:Close()
RETURN cValue

********************************************************************************
METHOD pegaObjetoCertificado() CLASS TXmlNfe
// Retorna o nome do objeto capicom do certificado criado
  LOCAL oStore, oCertificados, oResult := Nil, nI

  cSerialCert := ::cSerialCert

  #ifdef __XHARBOUR__
     oStore := xhb_CreateObject( "CAPICOM.Store")
  #endif

  oStore:open(::CAPICOM_CURRENT_USER_STORE,'My',::CAPICOM_STORE_OPEN_MAXIMUM_ALLOWED)
  oCertificados:= oStore:Certificates()
  FOR nI=1 TO oCertificados:Count()
     IF oCertificados:Item(nI):SerialNumber = cSerialCert
        oResult := oCertificados:Item(nI)
     ENDIF
  NEXT

  oCertificados := Nil
  oStore := Nil

RETURN(oResult)

********************************************************************************
METHOD pegaCNCertificado() CLASS TXmlNfe
	// Retorna o nome do usuario registrado no certificado
	LOCAL cSerialCert, oStore, oCertificados, oResult := Nil, nI, cSubjectName := ""
   
  cSerialCert := ::cSerialCert

  oStore := xhb_CreateObject("CAPICOM.Store")

  oStore:open(::CAPICOM_CURRENT_USER_STORE,'My',::CAPICOM_STORE_OPEN_MAXIMUM_ALLOWED)
  oCertificados:=oStore:Certificates()

  FOR nI=1 TO oCertificados:Count()
     IF oCertificados:Item(nI):SerialNumber = cSerialCert
        cSubjectName := oCertificados:Item(nI):SubjectName
     ENDIF
  NEXT

  cCN := ""
  FOR nI=AT("CN=",cSubjectName)+3 TO LEN(cSubjectName)
     IF SUBS(cSubjectName,nI,1) == ","
        EXIT
     ENDIF
     cCN += SUBS(cSubjectName,nI,1)
  NEXT

  oCertificados := Nil
  oStore := Nil

RETURN(cCN)

********************************************************************************
METHOD pegaPropriedadesCertificado() CLASS TXmlNfe

	LOCAL oStore, oCertificados, aRetorno := hash(), nI
   cSerialCert := ::cSerialCert

   oStore := xhb_CreateObject( "CAPICOM.Store")

  oStore:open(::CAPICOM_CURRENT_USER_STORE,'My',::CAPICOM_STORE_OPEN_MAXIMUM_ALLOWED)
  oCertificados:=oStore:Certificates()

  aRetorno['OK'] := .F.
 
  FOR nI=1 TO oCertificados:Count()
     IF oCertificados:Item(nI):SerialNumber = cSerialCert
        aRetorno['OK'] := .T.
        aRetorno['SerialNumber'] := oCertificados:Item(nI):SerialNumber
        aRetorno['ValidToDate'] := oCertificados:Item(nI):ValidToDate
        aRetorno['HasPrivateKey'] := oCertificados:Item(nI):HasPrivateKey
        aRetorno['SubjectName'] := oCertificados:Item(nI):SubjectName
        aRetorno['IssuerName'] := oCertificados:Item(nI):IssuerName
        aRetorno['Thumbprint'] := oCertificados:Item(nI):Thumbprint
        aRetorno['getInfo'] := oCertificados:Item(nI):getInfo(0)
     ENDIF
  NEXT

RETURN(aRetorno)

********************************************************************************
METHOD CriaXmlEnvio() CLASS TXmlNfe

	LOCAL oXml, oNodeChild, oNodeChild2, oNodeChild3, oNodeChild4
	
	* Cria novo documento xml
//	oXml:= TXMLDocument():New()
	
//	* Cabecalho
//*	oXml:oRoot:AddBelow( TxmlNode():New( HBXML_TYPE_PI , 'xml version="1.0" encoding="UTF-8"' ))
	
//	* Tag Principal do servico a ser executado
//   oNodeAction:= TxmlNode():New( HBXML_TYPE_TAG , 'downloadNFe' )
//	* Define os atributos da tag e seus respectivos valores 
//	oNodeAction:SetAttribute("xmlns"    , "http://www.portalfiscal.inf.br/nfe")

//   		* Add tag versao
//		oNode:= TxmlNode():New( HBXML_TYPE_TAG , "versao" )
//	   oNode:cData:= ::cVersaoDados
//		oNodeAction:AddBelow(oNode)           // adiciona a tag versao como filha da downloadNFe

//	   oXml:oRoot:AddBelow(oNodeAction) // Add a tag versao 


//   	* Add tag filha = tpAmb
//		oNodeChild:= TxmlNode():New( HBXML_TYPE_TAG , "tpAmb" )
//		oNodeChild:cData:= ::cAmbiente
//		oNodeAction:AddBelow(oNodeChild) // add tag tipo de ambiente como filha da downloadNFe


//   	* Add tag filha = xServ
//		oNodeChild2:= TxmlNode():New( HBXML_TYPE_TAG , "xServ" )
//		oNodeChild2:cData:= ::cServ
//		oNodeAction:AddBelow(oNodeChild2) // add tag descricao do servico como filha da downloadNFe


//   	* Add tag filha = CNPJ
//		oNodeChild3:= TxmlNode():New( HBXML_TYPE_TAG , "CNPJ" )
//		oNodeChild3:cData:= ::cCnpj
//		oNodeAction:AddBelow(oNodeChild3) // add tag cnpj do destinatario como filha da downloadNFe

//   	* Add tag filha = chNFe
//		oNodeChild4:= TxmlNode():New( HBXML_TYPE_TAG , "chNFe" )
//		oNodeChild4:cData:= ::cChave
//		oNodeAction:AddBelow(oNodeChild4) // add tag chave da nf-e como filha da downloadNFe

//   * Bem, agora , basta criar o arquivo onde colocar toda essa informa��o
//	hFile := FCREATE( ".\downfe-env.xml" )
   	
//	IF hFile != -1
//		oXml:Write( hFile , HBXML_STYLE_INDENT )
//		Fclose( hFile )
	
//	   RemoveHeadXml(".\downfe-env.xml")

//	ELSE
//      MsgInfo("Falha ao criar o arquivo de envio", "Aten��o")
//	ENDIF


   oXml:= '<downloadNFe xmlns="http://www.portalfiscal.inf.br/nfe" versao="1.00">'	
   oXml+=   '<tpAmb>'+ ::cAmbiente +'</tpAmb>'
   oXml+=   '<xServ>'+ ::cServ +'</xServ>'
   oXml+=   '<CNPJ>'+ ::cCnpj +'</CNPJ>'
   oXml+=   '<chNFe>'+ ::cChave +'</chNFe>' 
	oXml+= '</downloadNFe>'
      
   ::cXMLFile:= Alltrim(oXml)
   
RETURN NIL

********************************************************************************
METHOD BaixarXmlNfe() CLASS TXmlNfe

	* Baixa o Xml da Nf-e no webservice da receita federal
	LOCAL oPg, cBuf , cCN , nSerial, nDataVal, cUrlWS, cXML
	LOCAL cUrl:= "http://www.nfe.fazenda.gov.br/PORTAL/consulta.aspx?tipoConsulta=completa&tipoConteudo=XbSeqxE8pl8%3d"
	LOCAL ErroNET:= .f.
	LOCAL cSOAPAction
	LOCAL aRetorno := hash()
	 
	
	SET DATE TO BRITISH
	SET CENTURY ON
	 
	IF EMPTY(::cChave)
	   MsgInfo("Chave da NF-e em branco")
		RETURN NIL
	ENDIF
	
	IF EMPTY(::cCnpj)
	   MsgInfo("CNPJ do destinat�rio da NF-e em branco")
		RETURN NIL
	ENDIF

	IF !IsInternet()
	   MsgInfo("Equipamento sem conex�o com a Internet")
		RETURN NIL
	ENDIF

	******************************************

	aRet:= ::escolheCertificado(.T.)
	
	IF aRet['OK'] 
		::cSerialCert:= aRet['Serial']  
	ELSE
	   ? aRet['MsgErro']
		RETURN NIL
	ENDIF

	* obtem as propriedades do certificado digital
//	aProp:= ::pegaPropriedadesCertificado(::cSerialCert)

//	? aProp['OK'] 
//	? aProp['SerialNumber']    // numero do serial
//	? aProp['ValidToDate']     // data e hora do vencimento
//	? aProp['HasPrivateKey']   // se tem chave privada
//	? aProp['SubjectName']     // CN completo
//	? aProp['IssuerName']      // CN da empresa que cadastrou
//	? aProp['Thumbprint']      // parece chave publica = pesquisar depois

	* Se status do certificado nao estiver ok aborta a operacao
//	IF ! aProp['OK'] 
//	   MsgInfo("Certificado Digital inv�lido")
//		RETURN NIL
//	ENDIF

//	* Testa data de validade do certificado
//	nDataVal:= ALLTRIM(LEFT(DTOC(aProp['ValidToDate']),10)) 
//	nDataVal:= CTOD(nDataVal)
	
//	* se a data de validade expirou aborta a operacao
//	IF nDataVal < DATE()
//	   MsgInfo("Data do certificado digital expirada em "+DTOC(nDataVal) , "Aviso")
//		RETURN NIL
//	ENDIF


   cCN := ::pegaCNCertificado(::cSerialCert)

	* Links para consumo do WS

	*   SEFAZ RS ->       https://nfe.sefaz.rs.gov.br/ws/nfeDownloadNF/nfeDownloadNF.asmx
	*   SEFAZ AN ->       https://www.nfe.fazenda.gov.br/NfeDownloadNF/NfeDownloadNF.asmx
   
	cUrlWS:= "https://www.nfe.fazenda.gov.br/NfeDownloadNF/NfeDownloadNF.asmx"

   cSOAPAction:= "http://www.portalfiscal.inf.br/nfe/wsdl/NfeDownloadNF/nfeDownloadNF"


	* Envelopa a XML
   cXML:= ""
	cXML += '<?xml version="1.0" encoding="utf-8"?>'
   cXML += '<soap:Envelope xmlns:soap="http://www.w3.org/2003/05/soap-envelope" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema">'
   cXML +=   '<soap:Header>'
   cXML +=     '<nfeCabecMsg xmlns="http://www.portalfiscal.inf.br/nfe/wsdl/NfeDownloadNF">'
   cXML +=       '<versaoDados>'+ "1.00" +'</versaoDados>'
   cXML +=       '<cUF>'+ ::cUf +'</cUF>'
   cXML +=     '</nfeCabecMsg>'
   cXML +=   '</soap:Header>'
   cXML +=   '<soap:Body>'
   cXML +=     '<nfeDadosMsg xmlns="http://www.portalfiscal.inf.br/nfe/wsdl/NfeDownloadNF">'
   cXML +=       ::cXMLFile 
   cXML +=     '</nfeDadosMsg>'
   cXML +=   '</soap:Body>'
   cXML += '</soap:Envelope>'

   ********************************

   
   oServerWS:= xhb_CreateObject( 'MSXML2.ServerXMLHTTP.6.0' )

   oServerWS:setOption( 3, "CURRENT_USER\MY\"+cCN )
   oServerWS:open("POST", cUrlWS, .F.)
   oServerWS:setRequestHeader("SOAPAction", cSOAPAction)
   oServerWS:setRequestHeader("Content-Type", "text/xml; charset=utf-8")

	
   
	oDOMDoc:= xhb_CREATEOBJECT("MSXML2.DOMDocument.5.0")

   oDOMDoc:async              := .F.
   oDOMDoc:resolveExternals   := .F.
   oDOMDoc:validateOnParse    := .T.
   oDOMDoc:preserveWhiteSpace := .T.
   oDOMDoc:LoadXML(cXML)

	
   IF oDOMDoc:parseError:errorCode <> 0 // XML n�o carregado
      cMsgErro := "N�o foi poss�vel carregar o documento pois ele n�o corresponde ao seu Schema"+HB_OsNewLine() +;
                  " Linha: " + STR(oDOMDoc:parseError:line)+HB_OsNewLine() +;
                  " Caractere na linha: " + STR(oDOMDoc:parseError:linepos)+HB_OsNewLine() +;
                  " Causa do erro: " + oDOMDoc:parseError:reason+HB_OsNewLine() +;
                  "code: "+STR(oDOMDoc:parseError:errorCode)
      aRetorno['OK']       := .F.
      aRetorno['MsgErro']  := cMsgErro
      
		? cMsgErro
      
      RETURN(aRetorno)
   ENDIF

	
   TRY  // envia o arquivo
      oServerWS:send(oDOMDoc:xml)
   CATCH oError
	
     cMsgErro := "Falha "+HB_OsNewLine()+ ;
             	 "Error: "  + Transform(oError:GenCode, nil) + ";" +HB_OsNewLine()+ ;
              	 "SubC: "   + Transform(oError:SubCode, nil) + ";" +HB_OsNewLine()+ ;
             	 "OSCode: "  + Transform(oError:OsCode,  nil) + ";" +HB_OsNewLine()+ ;
             	 "SubSystem: " + Transform(oError:SubSystem, nil) + ";" +HB_OsNewLine()+ ;
            	 "Mensangem: " + oError:Description
     aRetorno['OK']       := .F.
     aRetorno['MsgErro']  := cMsgErro
     
     ? cMsgErro
     
     RETURN(aRetorno)
   END

   DO WHILE oServerWS:readyState <> 4
      millisec(500)
   ENDDO

   cXMLResp := HB_ANSITOOEM(oServerWS:responseText)


	* Grava o xml de envio
   MemoWrit(".\downfe-env.xml", cXML, .f.)
	
	* grava o arquivo de retorno do WS
	Memowrit(".\wsRet.xml", cXMLResp)
	
	MsgInfo("Mensagem de Retorno do WS" +CRLF+; 
	        "C�digo: "+ FindTag("cStat", ".\wsRet.xml") +CRLF+;
	        "Descri��o: " + FindTag("xMotivo", ".\wsRet.xml") , "Retorno do Pedido")

	        
RETURN NIL

********************************************************************************
FUNCTION FindTag(cTag, xmlDoc) 
	* localiza a tag recebida por referencia e retorna o valor
	LOCAL cKey:= cValue:= ""
	LOCAL hFile, oXmlDoc
	
   hFile     := FOpen( xmlDoc )
             
	oXmlDoc   := TXmlDocument():New( hFile )
   
	oIterator := TXmlIterator():New( oXmlDoc:oRoot )
   oCurrent  := oIterator:Find()

   WHILE oCurrent != Nil
  		
      IF oCurrent:cName == cTag
		   * retorna os atributos da tag, caso ela possuir. Ex: <det nItem='2'>
			// HEval( oCurrent:aAttributes, { | cKey, cValue | MsgInfo( cKey, cValue ) } )
  		   cValue:= oCurrent:cData
		ENDIF	
		
		oCurrent := oIterator:Next() //vai para o proximo campo
	END

   FClose( hFile )
   
RETURN cValue

********************************************************************************
FUNCTION EncodingXml(cFile)
	* Aplica o encoding do cabecalho do arquivo xml no padrao do manual versao 2.0

	LOCAL oFile
	
	IF !FILE(cFile)
		RETURN NIL
	ENDIF
		
	oFile:= TTXTFile():New(cFile)
	oFile:InsLine('<?xml version="1.0" encoding="UTF-8"?>')
	oFile:Goto(2)
   oFile:DelLine()
	oFile:End()
   
RETURN NIL

********************************************************************************
FUNCTION RemoveHeadXml(cFile)
	* Remove o cabecalho do xml
	LOCAL oFile
	
	IF !FILE(cFile)
		RETURN NIL
	ENDIF
		
	oFile:= TTXTFile():New(cFile)
	oFile:Gotop()
   oFile:DelLine()
	oFile:End()

RETURN NIL

********************************************************************************
//FUNCTION Errors_WS()

	* Rela��o de erros do WebService
   * RESULTADO DO PROCESSAMENTO DA SOLICITA��O. Intervalo: 128 ao 140
	* C�digo MOTIVOS DE N�O ATENDIMENTO DA SOLICITA��O. Intervalo: 489 ao 658

// 217 Rejeicao: NF-e nao consta na base de dados da SEFAZ
//	128 Lote de Evento Processado
//	135 Evento registrado e vinculado a NF-e
//	136 Evento registrado, mas n�o vinculado a NF-e
//	137 Nenhum documento localizado para o Destinat�rio
//	138 Documento localizado para o Destinat�rio
//	139 Pedido de Download processado
//	140 Download disponibilizado
//	489 Rejei��o: CNPJ informado inv�lido (DV ou zeros)
//	490 Rejei��o: CPF informado inv�lido (DV ou zeros)
//	491 Rejei��o: O tpEvento informado inv�lido
//	492 Rejei��o: O verEvento informado inv�lido
//	493 Rejei��o: Evento n�o atende o Schema XML espec�fico
//	494 Rejei��o: Chave de Acesso inexistente
//	572 Rejei��o: Erro Atributo ID do evento n�o corresponde a concatena��o dos campos (�ID� + tpEvento + chNFe + nSeqEvento)
//	573 Rejei��o: Duplicidade de Evento
//	574 Rejei��o: O autor do evento diverge do emissor da NF-e
//	575 Rejei��o: O autor do evento diverge do destinat�rio da NF-e
//	576 Rejei��o: O autor do evento n�o � um �rg�o autorizado a gerar o evento
//	577 Rejei��o: A data do evento n�o pode ser menor que a data de emiss�o da NF-e
//	578 Rejei��o: A data do evento n�o pode ser maior que a data do processamento
//	579 Rejei��o: A data do evento n�o pode ser menor que a data de autoriza��o para NF-e n�o emitida em conting�ncia
//	580 Rejei��o: O evento exige uma NF-e autorizada
//	587 Rejei��o: Usar somente o namespace padr�o da NF-e
//	588 Rejei��o: N�o � permitida a presen�a de caracteres de edi��o no in�cio/fim da mensagem ou entre as tags da mensagem
//	589 Rejei��o: N�mero do NSU informado superior ao maior NSU da base de dados da SEFAZ
//	593 Rejei��o: CNPJ-Base consultado difere do CNPJ-Base do Certificado Digital
//	594 Rejei��o: O n�mero de sequencia do evento informado � maior que o permitido
//	595 Rejei��o: Obrigat�ria a informa��o da justificativa do evento.
//	596 Rejei��o: Evento apresentado fora do prazo: [prazo vigente]
//	614 Rejei��o: Chave de Acesso inv�lida (C�digo UF inv�lido)
//	615 Rejei��o: Chave de Acesso inv�lida (Ano menor que 06 ou Ano maior que Ano corrente)
//	616 Rejei��o: Chave de Acesso inv�lida (M�s menor que 1 ou M�s maior que 12)
//	617 Rejei��o: Chave de Acesso inv�lida (CNPJ zerado ou d�gito inv�lido)
//	618 Rejei��o: Chave de Acesso inv�lida (modelo diferente de 55)
//	619 Rejei��o: Chave de Acesso inv�lida (n�mero NF = 0)
//	631 Rejei��o: CNPJ-Base do Destinat�rio difere do CNPJ-Base do Certificado Digital
//	632 Rejei��o: Solicita��o fora de prazo, a NF-e n�o est� mais dispon�vel para download
//	633 Rejei��o: NF-e indispon�vel para download devido a aus�ncia de Manifesta��o do Destinat�rio
//	634 Rejei��o: Destinat�rio da NF-e n�o tem o mesmo CNPJ raiz do solicitante do download
//	650 Rejei��o: Evento de "Ci�ncia da Opera��o" para NF-e Cancelada ou Denegada
//	651 Rejei��o: Evento de "Desconhecimento da Opera��o" para NF-e Cancelada ou Denegada
//	653 Rejei��o: NF-e Cancelada, arquivo indispon�vel para download
//	654 Rejei��o: NF-e Denegada, arquivo indispon�vel para download
//	655 Rejei��o: Evento de Ci�ncia da Opera��o informado ap�s a manifesta��o final do destinat�rio
//	656 Rejei��o: Consumo Indevido
//	657 Rejei��o: C�digo do �rg�o diverge do �rg�o autorizador
//	658 Rejei��o: UF do destinat�rio da Chave de Acesso diverge da UF autorizadora
	
	
//RETURN NIL


