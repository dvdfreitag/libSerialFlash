#include <avr/io.h>

#include "SerialFlash.h"
#include "SPI.h"

#define RD 			0x03U // Read Data Bytes from Memory at Normal Read Mode, 33MHz
#define FR 			0x0BU // Read Data Bytes from Memory at Fast Read Mode, 104MHz
#define FRDIO 		0xBBU // Fast Read Dual I/O, 104MHz
#define FRDO 		0x3BU // Fast Read Dual Output, 104MHz
#define FRQIO 		0xEBU // Fast Read Quad I/O, 104MHz
#define FRQO 		0x6BU // Fast Read Quad Output, 104MHz
#define PP 			0x02U // Page Program Data Bytes into Memory, 104MHz

#define WREN 		0x06U // Write Enable, 104MHz
#define WRDI 		0x04U // Write Disable, 104MHz
#define RDSR 		0x05U // Read Status Register, 104MHz
#define WRSR 		0x01U // Write Status Register, 104MHz
#define RDFR 		0x48U // Read Function Register, 104MHz
#define WRFR 		0x42U // Write Function Register, 104MHz

#define DP 			0xB9U // Deep Power Down Mode, 104MHz
#define RDID 		0xABU // Read Manufacturer and Product ID, 104MHz
#define RDPD 		0xABU // Release Deep Power Down, 104MHz
#define RDUID 		0x4BU // Read Unique ID Number, 104MHz
#define RDJDID 		0x9FU // Read Manufacturer and Product ID by JEDEC ID Command, 104MHz
#define RDMDID 		0x90U // Read Manufacturer and Device ID, 104MHz
#define RDSFDP 		0x5AU // SFDP Read, 104MHz
#define RSTEN 		0x66U // Software Reset Enable, 104MHz
#define RESET 		0x99U // Reset, 104MHz
#define IRP			0x62U // Program Information Row, 104MHz
#define IRRD		0x68U // Read Information Row, 104MHz
#define SECUNLOCK	0x26U // Sector Unlock, 104MHz
#define SECLOCK		0x24U // Sector Lock, 104MHz

// Some configuration will be necessary, check the datasheet for your chip
#define PPQ 		0x32U // 32h/38h Page Program Data Bytes into Memory with Quad Interface, 104MHz
#define SER 		0xD7U // D7h/20h Sector Erase 4KB, 104MHz
#define BER32 		0x52U // (32Kbyte) Block Erase 32KB, 104MHz
#define BER64 		0xD8U // (64Kbyte) Block Erase 64KB, 104MHz
#define CER 		0xC7U // C7h/60h Chip Erase, 104MHz
#define PERSUS 		0x75U // 75h/B0h Suspend during the Program/Erase, 104MHz
#define PERRSM 		0x7AU // 7Ah/30h Resume Program/Erase, 104MHz

PORT_t *WPPort;
uint8_t WP;
PORT_t *HoldPort;
uint8_t Hold;

void SerialFlash_Init(SPI_t *spi, PORT_t *csPort, uint8_t cs, PORT_t *wpPort, uint8_t wp, PORT_t *holdPort, uint8_t hold)
{
	WPPort = wpPort;
	WP = wp;
	HoldPort = holdPort;
	Hold = hold;

	SPI_Init(spi, csPort, cs);
}

uint8_t SerialFlash_ReadByte(uint32_t addr)
{
	
}

void SerialFlash_ReadBytes(uint32_t addr, uint8_t *buffer, uint32_t length)
{
	
}

uint8_t SerialFlash_FastReadByte(uint32_t addr)
{
	
}

void SerialFlash_FastReadBytes(uint32_t addr, uint8_t *buffer, uint32_t length)
{
	
}

void SerialFlash_WriteByte(uint32_t addr, uint8_t data)
{
	
}

void SerialFlash_WriteBytes(uint32_t addr, uint8_t *buffer, uint32_t length)
{
	
}

void SerialFlash_SectorErase(uint8_t sector)
{
	
}

void SerialFlash_BlockErase32(uint8_t block)
{
	
}

void SerialFlash_BlockErase64(uint8_t block)
{
	
}

void SerialFlash_ChipErase(void)
{
	
}

void SerialFlash_WriteEnable(void)
{
	
}

void SerialFlash_WriteDisable(void)
{
	
}

uint8_t SerialFlash_ReadStatus(void)
{
	
}

void SerialFlash_WriteStatus(uint8_t status)
{
	
}

uint8_t SerialFlash_ReadFunction(void)
{
	
}

void SerialFlash_WriteFunction(uint8_t function)
{
	
}

void SerialFlash_DeepPower(void)
{
	
}

void SerialFlash_ReleaseDeepPower(void)
{
	
}

uint8_t SerialFlash_ReadPID(void)
{
	
}

uint8_t SerialFlash_ReadJEDEC(void)
{
	
}

uint16_t SerialFlash_ReadDevice(void)
{
	
}

void SerialFlash_ReadUID(uint8_t *buffer)
{
	
}

uint8_t SerialFlash_ReadSFDPByte(uint32_t addr)
{
	
}

void SerialFlash_ReadSFDPBytes(uint32_t addr, uint8_t *buffer, uint8_t length)
{
	
}

void SerialFlash_Reset(void)
{
	
}

void SerialFlash_WriteInformation(uint32_t addr, uint8_t *buffer, uint8_t length)
{
	
}

void SerialFlash_ReadInformation(uint32_t addr, uint8_t *buffer, uint8_t length)
{
	
}

void SerialFlash_Unlock(uint8_t sector)
{
	
}

void SerialFlash_Lock(void)
{
	
}
