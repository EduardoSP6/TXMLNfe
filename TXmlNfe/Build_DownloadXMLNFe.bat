@ECHO OFF
REM Gerado pela xDev Studio v0.72 as 09/08/2016 @ 10:53:34
REM Compilador .: xHB build 1.2.1 (Simplex) & BCC 5.8.2 & FW 11.09
REM Destino ....: C:\Sistemas Fivewin\TXmlNfe\DownloadXMLNFe.EXE
REM Perfil .....: Batch file (Relative Paths)

REM **************************************************************************
REM * Setamos abaixo os PATHs necessarios para o correto funcionamento deste *
REM * script. Se voce for executa-lo em  outra CPU, analise as proximas tres *
REM * linhas abaixo para refletirem as corretas configuracoes de sua maquina *
REM **************************************************************************
 SET PATH=C:\bcc582\Bin;C:\xhb121\bin;C:\fwh1109;C:\ProgramData\Oracle\Java\javapath;C:\Program Files\NVIDIA Corporation\PhysX\Common;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files\Intel\OpenCL SDK\2.0\bin\x86;C:\Program Files\Microsoft SQL Server\110\Tools\Binn\;c:\Program Files\Microsoft SQL Server\110\DTS\Binn\;c:\Program Files\Microsoft SQL Server\110\Tools\Binn\ManagementStudio\;C:\Program Files\Java\jdk1.7.0\bin;C:\Program Files\Windows Kits\8.1\Windows Performance Toolkit\;C:\Program Files\Microsoft SDKs\TypeScript\1.0\;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files\GtkSharp\2.12\bin;C:\Program Files\Skype\Phone\
 SET INCLUDE=C:\bcc582\include;C:\xhb121\include;C:\fwh1109\include;;
 SET LIB=C:\bcc582\lib;C:\bcc582\lib\psdk;C:\xhb121\lib;C:\fwh1109\lib;;
 SET PATH=C:\bcc582\Bin;C:\xhb121\bin;C:\fwh1109;C:\ProgramData\Oracle\Java\javapath;C:\Program Files\NVIDIA Corporation\PhysX\Common;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files\Intel\OpenCL SDK\2.0\bin\x86;C:\Program Files\Microsoft SQL Server\110\Tools\Binn\;c:\Program Files\Microsoft SQL Server\110\DTS\Binn\;c:\Program Files\Microsoft SQL Server\110\Tools\Binn\ManagementStudio\;C:\Program Files\Java\jdk1.7.0\bin;C:\Program Files\Windows Kits\8.1\Windows Performance Toolkit\;C:\Program Files\Microsoft SDKs\TypeScript\1.0\;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files\GtkSharp\2.12\bin;C:\Program Files\Skype\Phone\
 SET INCLUDE=C:\bcc582\include;C:\xhb121\include;C:\fwh1109\include;;
 SET LIB=C:\bcc582\lib;C:\bcc582\lib\psdk;C:\xhb121\lib;C:\fwh1109\lib;;
 SET PATH=C:\bcc582\Bin;C:\xhb121\bin;C:\fwh1109;C:\ProgramData\Oracle\Java\javapath;C:\Program Files\NVIDIA Corporation\PhysX\Common;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files\Intel\OpenCL SDK\2.0\bin\x86;C:\Program Files\Microsoft SQL Server\110\Tools\Binn\;c:\Program Files\Microsoft SQL Server\110\DTS\Binn\;c:\Program Files\Microsoft SQL Server\110\Tools\Binn\ManagementStudio\;C:\Program Files\Java\jdk1.7.0\bin;C:\Program Files\Windows Kits\8.1\Windows Performance Toolkit\;C:\Program Files\Microsoft SDKs\TypeScript\1.0\;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files\GtkSharp\2.12\bin;C:\Program Files\Skype\Phone\
 SET INCLUDE=C:\bcc582\include;C:\xhb121\include;C:\fwh1109\include;;
 SET LIB=C:\bcc582\lib;C:\bcc582\lib\psdk;C:\xhb121\lib;C:\fwh1109\lib;;
 SET PATH=C:\bcc582\Bin;C:\xhb121\bin;C:\fwh1109;C:\ProgramData\Oracle\Java\javapath;C:\Program Files\NVIDIA Corporation\PhysX\Common;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files\Intel\OpenCL SDK\2.0\bin\x86;C:\Program Files\Microsoft SQL Server\110\Tools\Binn\;c:\Program Files\Microsoft SQL Server\110\DTS\Binn\;c:\Program Files\Microsoft SQL Server\110\Tools\Binn\ManagementStudio\;C:\Program Files\Java\jdk1.7.0\bin;C:\Program Files\Windows Kits\8.1\Windows Performance Toolkit\;C:\Program Files\Microsoft SDKs\TypeScript\1.0\;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files\GtkSharp\2.12\bin;C:\Program Files\Skype\Phone\
 SET INCLUDE=C:\bcc582\include;C:\xhb121\include;C:\fwh1109\include;;
 SET LIB=C:\bcc582\lib;C:\bcc582\lib\psdk;C:\xhb121\lib;C:\fwh1109\lib;;
 SET PATH=C:\bcc582\Bin;C:\xhb121\bin;C:\fwh1109;C:\ProgramData\Oracle\Java\javapath;C:\Program Files\NVIDIA Corporation\PhysX\Common;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files\Intel\OpenCL SDK\2.0\bin\x86;C:\Program Files\Microsoft SQL Server\110\Tools\Binn\;c:\Program Files\Microsoft SQL Server\110\DTS\Binn\;c:\Program Files\Microsoft SQL Server\110\Tools\Binn\ManagementStudio\;C:\Program Files\Java\jdk1.7.0\bin;C:\Program Files\Windows Kits\8.1\Windows Performance Toolkit\;C:\Program Files\Microsoft SDKs\TypeScript\1.0\;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files\GtkSharp\2.12\bin;C:\Program Files\Skype\Phone\
 SET INCLUDE=C:\bcc582\include;C:\xhb121\include;C:\fwh1109\include;;
 SET LIB=C:\bcc582\lib;C:\bcc582\lib\psdk;C:\xhb121\lib;C:\fwh1109\lib;;
 SET PATH=C:\bcc582\Bin;C:\xhb121\bin;C:\fwh1109;C:\ProgramData\Oracle\Java\javapath;C:\Program Files\NVIDIA Corporation\PhysX\Common;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files\Intel\OpenCL SDK\2.0\bin\x86;C:\Program Files\Microsoft SQL Server\110\Tools\Binn\;c:\Program Files\Microsoft SQL Server\110\DTS\Binn\;c:\Program Files\Microsoft SQL Server\110\Tools\Binn\ManagementStudio\;C:\Program Files\Java\jdk1.7.0\bin;C:\Program Files\Windows Kits\8.1\Windows Performance Toolkit\;C:\Program Files\Microsoft SDKs\TypeScript\1.0\;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files\GtkSharp\2.12\bin;C:\Program Files\Skype\Phone\
 SET INCLUDE=C:\bcc582\include;C:\xhb121\include;C:\fwh1109\include;;
 SET LIB=C:\bcc582\lib;C:\bcc582\lib\psdk;C:\xhb121\lib;C:\fwh1109\lib;;
 SET PATH=C:\bcc582\Bin;C:\xhb121\bin;C:\fwh1109;C:\ProgramData\Oracle\Java\javapath;C:\Program Files\NVIDIA Corporation\PhysX\Common;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files\Intel\OpenCL SDK\2.0\bin\x86;C:\Program Files\Microsoft SQL Server\110\Tools\Binn\;c:\Program Files\Microsoft SQL Server\110\DTS\Binn\;c:\Program Files\Microsoft SQL Server\110\Tools\Binn\ManagementStudio\;C:\Program Files\Java\jdk1.7.0\bin;C:\Program Files\Windows Kits\8.1\Windows Performance Toolkit\;C:\Program Files\Microsoft SDKs\TypeScript\1.0\;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files\GtkSharp\2.12\bin;C:\Program Files\Skype\Phone\
 SET INCLUDE=C:\bcc582\include;C:\xhb121\include;C:\fwh1109\include;;
 SET LIB=C:\bcc582\lib;C:\bcc582\lib\psdk;C:\xhb121\lib;C:\fwh1109\lib;;
 SET PATH=C:\bcc582\Bin;C:\xhb121\bin;C:\fwh1109;C:\ProgramData\Oracle\Java\javapath;C:\Program Files\NVIDIA Corporation\PhysX\Common;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files\Intel\OpenCL SDK\2.0\bin\x86;C:\Program Files\Microsoft SQL Server\110\Tools\Binn\;c:\Program Files\Microsoft SQL Server\110\DTS\Binn\;c:\Program Files\Microsoft SQL Server\110\Tools\Binn\ManagementStudio\;C:\Program Files\Java\jdk1.7.0\bin;C:\Program Files\Windows Kits\8.1\Windows Performance Toolkit\;C:\Program Files\Microsoft SDKs\TypeScript\1.0\;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files\GtkSharp\2.12\bin;C:\Program Files\Skype\Phone\
 SET INCLUDE=C:\bcc582\include;C:\xhb121\include;C:\fwh1109\include;;
 SET LIB=C:\bcc582\lib;C:\bcc582\lib\psdk;C:\xhb121\lib;C:\fwh1109\lib;;
 SET PATH=C:\bcc582\Bin;C:\xhb121\bin;C:\fwh1109;C:\ProgramData\Oracle\Java\javapath;C:\Program Files\NVIDIA Corporation\PhysX\Common;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files\Intel\OpenCL SDK\2.0\bin\x86;C:\Program Files\Microsoft SQL Server\110\Tools\Binn\;c:\Program Files\Microsoft SQL Server\110\DTS\Binn\;c:\Program Files\Microsoft SQL Server\110\Tools\Binn\ManagementStudio\;C:\Program Files\Java\jdk1.7.0\bin;C:\Program Files\Windows Kits\8.1\Windows Performance Toolkit\;C:\Program Files\Microsoft SDKs\TypeScript\1.0\;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;C:\Program Files\GtkSharp\2.12\bin;C:\Program Files\Skype\Phone\
 SET INCLUDE=C:\bcc582\include;C:\xhb121\include;C:\fwh1109\include;;
 SET LIB=C:\bcc582\lib;C:\bcc582\lib\psdk;C:\xhb121\lib;C:\fwh1109\lib;;

REM - FiveWin.xCompiler.prg(77) @ 10:53:38:524
ECHO .ÿ
ECHO * (1/7) Compilando MAIN.PRG
 harbour.exe ".\MAIN.PRG" /q /o".\obj\MAIN.c"   /M  /N 
 IF ERRORLEVEL 1 GOTO FIM

REM - FiveWin.xCompiler.prg(112) @ 10:53:38:828
 echo -I"C:\bcc582\include;C:\xhb121\include;C:\fwh1109\include;;" > "b32.bc"
 echo -L"C:\bcc582\lib;C:\bcc582\lib\psdk;C:\xhb121\lib;C:\fwh1109\lib;;;;;" >> "b32.bc"
 echo -o".\obj\MAIN.obj" >> "b32.bc"
 echo ".\obj\MAIN.c" >> "b32.bc"

REM - FiveWin.xCompiler.prg(113) @ 10:53:38:828
ECHO .ÿ
ECHO * (2/7) Compilando MAIN.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - FiveWin.xCompiler.prg(77) @ 10:53:39:125
ECHO .ÿ
ECHO * (3/7) Compilando TXmlNFe.PRG
 harbour.exe ".\TXmlNFe.PRG" /q /o".\obj\TXmlNFe.c"   /M  /N 
 IF ERRORLEVEL 1 GOTO FIM

REM - FiveWin.xCompiler.prg(112) @ 10:53:39:242
 echo -I"C:\bcc582\include;C:\xhb121\include;C:\fwh1109\include;;" > "b32.bc"
 echo -L"C:\bcc582\lib;C:\bcc582\lib\psdk;C:\xhb121\lib;C:\fwh1109\lib;;;;;" >> "b32.bc"
 echo -o".\obj\TXmlNFe.obj" >> "b32.bc"
 echo ".\obj\TXmlNFe.c" >> "b32.bc"

REM - FiveWin.xCompiler.prg(113) @ 10:53:39:242
ECHO .ÿ
ECHO * (4/7) Compilando TXmlNFe.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - FiveWin.xCompiler.prg(77) @ 10:53:39:312
ECHO .ÿ
ECHO * (5/7) Compilando W32OLE.PRG
 harbour.exe ".\W32OLE.PRG" /q /o".\obj\W32OLE.c"   /M  /N 
 IF ERRORLEVEL 1 GOTO FIM

REM - FiveWin.xCompiler.prg(112) @ 10:53:39:446
 echo -I"C:\bcc582\include;C:\xhb121\include;C:\fwh1109\include;;" > "b32.bc"
 echo -L"C:\bcc582\lib;C:\bcc582\lib\psdk;C:\xhb121\lib;C:\fwh1109\lib;;;;;" >> "b32.bc"
 echo -o".\obj\W32OLE.obj" >> "b32.bc"
 echo ".\obj\W32OLE.c" >> "b32.bc"

REM - FiveWin.xCompiler.prg(113) @ 10:53:39:446
ECHO .ÿ
ECHO * (6/7) Compilando W32OLE.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - FiveWin.xCompiler.prg(245) @ 10:53:40:590
 echo -I"C:\bcc582\include;C:\xhb121\include;C:\fwh1109\include;;" + > "b32.bc"
 echo -L"C:\bcc582\lib;C:\bcc582\lib\psdk;C:\xhb121\lib;C:\fwh1109\lib;;;;;" + >> "b32.bc"
 echo -aa + >> "b32.bc"
 echo -Gn -Tpe -s + >> "b32.bc"
 echo c0w32.obj +     >> "b32.bc"
 echo ".\obj\MAIN.obj"  +  >> "b32.bc"
 echo ".\obj\TXmlNFe.obj"  +  >> "b32.bc"
 echo ".\obj\W32OLE.obj", +  >> "b32.bc"
 echo ".\DownloadXMLNFe.EXE", +    >> "b32.bc"
 echo ".\DownloadXMLNFe.map", +    >> "b32.bc"
 echo FiveHx.lib FiveHC.lib + >> "b32.bc"
 echo rtl.lib +       >> "b32.bc"
 echo vm.lib +        >> "b32.bc"
 echo gtgui.lib +  >> "b32.bc"
 echo lang.lib +      >> "b32.bc"
 echo macro.lib +     >> "b32.bc"
 echo rdd.lib +       >> "b32.bc"
 echo codepage.lib +  >> "b32.bc"
 echo dbfntx.lib +    >> "b32.bc"
 echo dbffpt.lib +    >> "b32.bc"
 echo hbsix.lib +     >> "b32.bc"
 echo common.lib +    >> "b32.bc"
 echo pp.lib +        >> "b32.bc"
 echo "C:\xhb121\lib\ct.lib" +   >> "b32.bc"
 echo "C:\xhb121\lib\dbfcdx.lib" +   >> "b32.bc"
 echo "C:\xhb121\lib\pcrepos.lib" +   >> "b32.bc"
 echo "C:\bcc582\Lib\PSDK\psapi.lib" +   >> "b32.bc"
 echo "C:\xhb121\lib\tip.lib" +   >> "b32.bc"
 echo cw32.lib +      >> "b32.bc"
 echo import32.lib +  >> "b32.bc"
 echo nddeapi.lib + >> "b32.bc"
 echo iphlpapi.lib + >> "b32.bc"
 echo rasapi32.lib + >> "b32.bc"
 echo , >> "b32.bc"
 echo ".\res\res.res" +  >> "b32.bc"

REM - FiveWin.xCompiler.prg(246) @ 10:53:40:590
ECHO .ÿ
ECHO * (7/7) Linkando DownloadXMLNFe.EXE
 ILINK32 @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

:FIM
 ECHO Fim do script de compilacao!
