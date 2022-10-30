#ifndef __MAIN_H__
#define	__MAIN_H__

#include "stdint.h"
#include "stdio.h"

#define	 INTERNALFLASH_BASEADDR			0x08081000UL	// @NOTICE: olmasý gereken !!


typedef struct 			
{
	uint32_t a_u32;	// 4 byte			// -->	//@INFO: 0x0400 0000
	uint8_t	 b_u8;	// 1 byte
	//[[[[[[[[[[[[[[[[[
	// Yeni eklenecekler buraya gelecek
	uint16_t c_u16; // 2 byte
	//]]]]]]]]]]]]]]]]]
	uint8_t data[92];					// --> //@INFO: data[n] --> 0x0400 0064					
}typdef_flash_mainPacket;

typedef struct 
{
	uint32_t a_u32;		// 4 byte		// -->	
	uint32_t	 b_u8;	// 4 byte
	//[[[[[[[[[[[[[[[[[
	// Yeni eklenecekler buraya gelecek
	uint16_t c_u16; // 2 byte
	//]]]]]]]]]]]]]]]]]
	uint8_t data[90];					// --> //@INFO: data[n] -->  0x0400 00C9				
}typdef_flash_telemetyPacket;

typedef struct 
{
	uint32_t	a_u8;		// 1 byte		// -->	
	uint32_t	b_u8;		// 1 byte
	//[[[[[[[[[[[[[[[[[
	// Yeni eklenecekler buraya gelecek
	uint16_t	c_u8;		// 1 byte
	//]]]]]]]]]]]]]]]]]
	uint8_t data[97];					// --> //@INFO: data[n] --> 		0x0400 01CA			
}typdef_flash_measurePacket;

typedef struct 
{
	uint8_t							startAddr;			//@INFO: data[n] --> 0x0400 09FA	// 1 + 3 -->
	uint8_t							startRFUParam[100];	//@INFO: data[n] --> 0x0400 09FB				
	//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
	typdef_flash_mainPacket			mainParams;
	typdef_flash_telemetyPacket		telemetryParams;
	typdef_flash_measurePacket		measureParams;	
	//]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]
	uint8_t							endRFUParam[100];	// --> //@INFO: data[n] --> 		0x0400 02CB	
	uint8_t							endAddr;			// --> //@INFO: data[n] --> 		0x0400 02CC		

}typdef_flash_main;


typdef_flash_main sys_flash_typdef_flashMain;




#endif