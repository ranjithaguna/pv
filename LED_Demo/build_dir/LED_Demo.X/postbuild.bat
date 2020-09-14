REM Define all the required local variables 
set prjname=LED_Demo
SET SPIGEN_PATH=..\..\spi_image_gen\
SET SCAT=..\..\spi_image_gen\srec_cat.exe
set Objects=dist\default\production
SET START_LOC=0xE0000
set CNT_DIR=%cd%
set SPI_FLASH_OFFSET=0x50000000

SET SPIGEN_EXE=everglades_spi_gen.exe

if not exist %Objects%\%prjname%.X.production.hex goto END

%SCAT% %Objects%\%prjname%.X.production.hex -intel -offset -%START_LOC% -O  temp.hex -intel
%SCAT% temp.hex -intel -O %Objects%\%prjname%.X.production.bin -binary
del temp.hex

copy /y %Objects%\%prjname%.X.production.bin %SPIGEN_PATH%\input.bin

cd %SPIGEN_PATH%
%SPIGEN_EXE%

cd %CNT_DIR%
%SCAT% %SPIGEN_PATH%\spi_image.bin -binary -offset %SPI_FLASH_OFFSET% -O spi_image.hex -intel
move spi_image.hex %Objects%\%prjname%_spiflash.X.production.hex

goto END

:CERROR
set BATCHERROR=1

:END
cd %CNT_DIR%
