REM Define all the required local variables 
set prjname=LED_Demo
SET SPIGEN_PATH=..\..\spi_image_gen\
SET SCAT=..\..\spi_image_gen\srec_cat.exe
set Objects=dist\default\production
SET START_LOC=0xE0000
set CNT_DIR=%cd%
set SPI_FLASH_OFFSET=0x50000000

SET SPIGEN_EXE=everglades_spi_gen.exe

SET FLASH_HEADER_PATH=..\..\flash_header_script\
SET FLASH_HEADER_SCRIPT=flash_header_script.exe

if not exist %Objects%\%prjname%.X.production.hex goto END

%SCAT% %Objects%\%prjname%.X.production.hex -intel -offset -%START_LOC% -O  temp.hex -intel
%SCAT% temp.hex -intel -O %Objects%\%prjname%.X.production.bin -binary
del temp.hex

copy /y %Objects%\%prjname%.X.production.bin %SPIGEN_PATH%\input.bin

cd %SPIGEN_PATH%
%SPIGEN_EXE%

cd %CNT_DIR%
move %SPIGEN_PATH%\spi_image.bin %FLASH_HEADER_PATH%

cd %FLASH_HEADER_PATH%
%FLASH_HEADER_SCRIPT%

if not exist flash_header_spi_image.bin goto ERROR

cd %CNT_DIR%
%SCAT% %FLASH_HEADER_PATH%\flash_header_spi_image.bin -binary -offset %SPI_FLASH_OFFSET% -O flash_header_spi_image.hex -intel
move flash_header_spi_image.hex %Objects%\%prjname%_fh_spiflash.X.production.hex

goto END

:CERROR
set BATCHERROR=1

:ERROR
echo //////********CHECK FLASH HEADER CFG FILE********\\\\\\

:END
cd %CNT_DIR%

