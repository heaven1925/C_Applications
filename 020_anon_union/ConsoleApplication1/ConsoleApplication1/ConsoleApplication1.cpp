#include <iostream>
#include "stdint.h"

typedef union
{
	uint8_t reg;
	struct
	{
		bool bit1 : 1;
		bool bit2 : 1;
		bool bit3 : 1;
		bool bit4 : 1;
		bool bit5 : 1;
		bool bit6 : 1;
		bool bit7 : 1;
		bool bit8 : 1;
	}Bits;
}Reg_st;
 
Reg_st GPIO_ODR;

typedef union
{
	uint8_t reg;
#pragma anon_unions
	struct
	{
		bool bit1 : 1;
		bool bit2 : 1;
		bool bit3 : 1;
		bool bit4 : 1;
		bool bit5 : 1;
		bool bit6 : 1;
		bool bit7 : 1;
		bool bit8 : 1;
	};
}RegU_st;

RegU_st GPIO_IDR;

int main()
{
	GPIO_ODR.reg = 0xAA;
	printf("%d \n", GPIO_ODR.Bits.bit1);
	printf("%d \n", GPIO_ODR.Bits.bit2);
	printf("%d \n", GPIO_ODR.Bits.bit3);
	printf("%d \n", GPIO_ODR.Bits.bit4);
	printf("%d \n", GPIO_ODR.Bits.bit5);
	printf("%d \n", GPIO_ODR.Bits.bit6);
	printf("%d \n", GPIO_ODR.Bits.bit7);
	printf("%d \n", GPIO_ODR.Bits.bit8);

	GPIO_IDR.reg = 0xAA;

	printf("%d \n", GPIO_IDR.bit1);
	printf("%d \n", GPIO_IDR.bit2);
	printf("%d \n", GPIO_IDR.bit3);
	printf("%d \n", GPIO_IDR.bit4);
	printf("%d \n", GPIO_IDR.bit5);
	printf("%d \n", GPIO_IDR.bit6);
	printf("%d \n", GPIO_IDR.bit7);
	printf("%d \n", GPIO_IDR.bit8);

}

