#include "stdio.h"
#include "stdint.h"

#include <inttypes.h>

uint32_t	sys_main_littleEndianTobigEndian(uint32_t littleEndianVal_u32);

typedef struct
{
	uint32_t fullword_u32;
	uint32_t byte0_u32;
	uint32_t byte1_u32;
	uint32_t byte2_u32;
	uint32_t byte3_u32;

}sys_main_typdef_wordFormat;


int main()
{
	uint32_t* pAddr;
	uint32_t	data = 256;
	pAddr = &(data);


	////printf("%p \n", pAddr);		// 0x0000

	////pAddr = (uint32_t*)(&(data)+1);
	////printf("%p \n", pAddr);		// 0x0004

	////pAddr = (uint32_t*)((uint16_t*)&(data)+1);
	////printf("%p \n", pAddr);		// 0x0001 -- 0x002

	////pAddr = (uint32_t*)((uint8_t*)&(data)+1);
	////printf("%p \n", pAddr);		// 0x0001 -- 0x001
	//printf("Little Endian - Default \n");
	//printf("--- %X \n", *(uint8_t*)&data );
	//printf("--- %X \n", *((uint8_t*)&data + 1) );
	//printf("--- %X \n", *((uint8_t*)&data + 2) );
	//printf("--- %X \n", *((uint8_t*)&data + 3) );
	//
	//printf("\n\n");

	//uint32_t b0, b1, b2, b3;
	//b0 = (data & 0x000000ff) << 24u;
	//b1 = (data & 0x0000ff00) << 8u;
	//b2 = (data & 0x00ff0000) >> 8u;
	//b3 = (data & 0xff000000) >> 24u;
	//data = b0 | b1 | b2 | b3;

	//printf("Big Endian \n");
	//printf("--- %X \n", *(uint8_t*)&data);
	//printf("--- %X \n", *((uint8_t*)&data + 1));
	//printf("--- %X \n", *((uint8_t*)&data + 2));
	//printf("--- %X \n", *((uint8_t*)&data + 3));
	//
	//printf("\n\n");printf("\n\n");printf("\n\n");

	data = 256;
	printf("Little Endian - Default \n");
	printf("--- %X \n", *(uint8_t*)&data);
	printf("--- %X \n", *((uint8_t*)&data + 1));
	printf("--- %X \n", *((uint8_t*)&data + 2));
	printf("--- %X \n", *((uint8_t*)&data + 3));

	data = sys_main_littleEndianTobigEndian(data);
	printf("Big Endian \n");
	printf("--- %X \n", *(uint8_t*)&data);
	printf("--- %X \n", *((uint8_t*)&data + 1));
	printf("--- %X \n", *((uint8_t*)&data + 2));
	printf("--- %X \n", *((uint8_t*)&data + 3));
}




uint32_t	sys_main_littleEndianTobigEndian(uint32_t littleEndianVal_u32) {

	uint32_t	tempVal1_u32;

	sys_main_typdef_wordFormat tempWord = { 0 };

	tempWord.byte0_u32 = (littleEndianVal_u32 & 0x000000ff) << 24UL;
	tempWord.byte1_u32 = (littleEndianVal_u32 & 0x0000ff00) << 8UL;
	tempWord.byte2_u32 = (littleEndianVal_u32 & 0x00ff0000) >> 8UL;
	tempWord.byte3_u32 = (littleEndianVal_u32 & 0xff000000) >> 24u;

	tempWord.fullword_u32 = tempWord.byte1_u32 |
		tempWord.byte1_u32 |
		tempWord.byte1_u32 |
		tempWord.byte1_u32;

	return	tempWord.fullword_u32;

}