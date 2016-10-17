#ifndef SERIALFLASH_H_
#define SERIALFLASH_H_

#include <avr/io.h>

// Status Register
#define SerialFlash_STATUS_WIP		0x01U // Write in progress
#define SerialFlash_STATUS_WEL		0x02U // Write enable latch
#define SerialFlash_STATUS_BP0		0x04U // Block 0 protection
#define SerialFlash_STATUS_BP1		0x08U // Block 1 protection
#define SerialFlash_STATUS_BP2		0x10U // Block 2 protection
#define SerialFlash_STATUS_BP3		0x20U // Block 4 protection
#define SerialFlash_STATUS_QE		0x40U // Quad enable
#define SerialFlash_STATUS_SRWD		0x80U // Status register write disable

// Function Register
#define SerialFlash_FUNCTION_PSUS	0x04U // Program suspend
#define SerialFlash_FUNCTION_ESUS	0x08U // Erase suspend
#define SerialFlash_FUNCTION_LOCK0	0x10U // Information Row 0 lock
#define SerialFlash_FUNCTION_LOCK1	0x20U // Information Row 1 lock
#define SerialFlash_FUNCTION_LOCK2	0x40U // Information Row 2 lock
#define SerialFlash_FUNCTION_LOCK3	0x80U // Information Row 3 lock

void SerialFlash_Init(SPI_t *spi, PORT_t *csPort, uint8_t cs, PORT_t *wpPort, uint8_t wp, PORT_t *holdPort, uint8_t hold);

uint8_t SerialFlash_ReadByte(uint32_t addr);
void SerialFlash_ReadBytes(uint32_t addr, uint8_t *buffer, uint32_t length);

uint8_t SerialFlash_FastReadByte(uint32_t addr);
void SerialFlash_FastReadBytes(uint32_t addr, uint8_t *buffer, uint32_t length);

void SerialFlash_WriteByte(uint32_t addr, uint8_t data);
void SerialFlash_WriteBytes(uint32_t addr, uint8_t *buffer, uint32_t length);

void SerialFlash_SectorErase(uint8_t sector);
void SerialFlash_BlockErase32(uint8_t block);
void SerialFlash_BlockErase64(uint8_t block);
void SerialFlash_ChipErase(void);

void SerialFlash_WriteEnable(void);
void SerialFlash_WriteDisable(void);

uint8_t SerialFlash_ReadStatus(void);
void SerialFlash_WriteStatus(uint8_t status);

uint8_t SerialFlash_ReadFunction(void);
void SerialFlash_WriteFunction(uint8_t function);

void SerialFlash_DeepPower(void);
void SerialFlash_ReleaseDeepPower(void);

uint8_t SerialFlash_ReadPID(void);
uint8_t SerialFlash_ReadJEDEC(void);
uint16_t SerialFlash_ReadDevice(void);
void SerialFlash_ReadUID(uint8_t *buffer);

uint8_t SerialFlash_ReadSFDPByte(uint32_t addr);
void SerialFlash_ReadSFDPBytes(uint32_t addr, uint8_t *buffer, uint8_t length);

void SerialFlash_Reset(void);

void SerialFlash_WriteInformation(uint32_t addr, uint8_t *buffer, uint8_t length);
void SerialFlash_ReadInformation(uint32_t addr, uint8_t *buffer, uint8_t length);

void SerialFlash_Unlock(uint8_t sector);
void SerialFlash_Lock(void);

#endif
