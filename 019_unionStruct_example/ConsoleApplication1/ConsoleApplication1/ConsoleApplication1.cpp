#include <iostream>
#include "stdio.h"
#include "stdint.h"

typedef struct
{
	uint8_t data1;
	uint8_t data2;
	uint16_t data3;
	uint32_t data4;
	uint8_t eol;
}data2_st;
 
typedef union
{
	uint8_t data1;
	uint8_t data2;
	uint16_t data3;
	uint32_t data4;
	uint8_t eol;
}data_ut;
 

typedef union
{
	uint8_t byte[2];
	struct {
		uint8_t bit0 : 1;
		uint8_t bit1 : 1;
		uint8_t bit2 : 1;
		uint8_t bit3 : 1;
		uint8_t bit4 : 1;
		uint8_t bit5 : 1;
		uint8_t bit6 : 1;
		uint8_t bit7 : 1;
		uint8_t yanginval : 4;
		uint8_t tempval : 4;
	}Bits;
}byte_ut;

int main()
{
	//data_st data = { 0 };

	//data_st*	pData;

	//pData =  & data;

	//printf("%X \n", &pData->data1);
	//printf("%X \n", &pData->data2);
	//printf("%X \n", &pData->data3);
	//printf("%X \n", &pData->data4);
	//printf("%x \n", &pData->eol);

	//data.data1 = 20;

	//printf("%d \n", data.data1);
	//printf("%d \n", data.data2);
	//printf("%d \n", data.data3);
	//printf("%d \n", data.data4);

	byte_ut can_byte1 = { 0 };
	can_byte1.byte[0] = 0b01010101;

	can_byte1.byte[1] = 0b11111111;

	printf("%X \n", can_byte1.byte);
	printf("%X \n", can_byte1.Bits.bit0);
	printf("%X \n", can_byte1.Bits.bit1);
	printf("%X \n", can_byte1.Bits.bit2);
	printf("%X \n", can_byte1.Bits.bit3);
	printf("%X \n", can_byte1.Bits.bit4);
	printf("%X \n", can_byte1.Bits.bit5);
	printf("%X \n", can_byte1.Bits.bit6);
	printf("%X \n", can_byte1.Bits.bit7);

	printf("%X \n", can_byte1.Bits.yanginval);
	printf("%X \n", can_byte1.Bits.tempval);

	if (can_byte1.Bits.yanginval >= 0xF)
	{
		printf("yangin var \n");
	}

	typedef struct S {
		char data[12];
		int a;
		int b;
		double x;
	}S_t;
	printf("%d", sizeof(S_t));

}
