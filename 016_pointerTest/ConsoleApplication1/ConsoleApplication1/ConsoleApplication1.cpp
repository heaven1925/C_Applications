
#include <iostream>
#include "stdint.h"

uint32_t a;
uint32_t* pA;

uint32_t b;
uint32_t* pB;

uint8_t* pA_byte0;
uint8_t* pA_byte1;
uint8_t* pA_byte2;
uint8_t* pA_byte3;

uint8_t dizi[4] = { 0x12, 0x34 , 0x56 , 0x78 };
uint8_t* pDizi;


typedef struct
{
	uint8_t a;
	uint16_t b;
	uint32_t c;
	uint64_t d;
	uint64_t e;
}str_st;

str_st str = {0};

uint8_t* pStr;

str_st* psStr;

int main()
{
	psStr = &str;
	printf("%p \n", psStr);

	printf("%p \n", psStr + 1);



	//pStr = (uint8_t*)&str.a;
	//printf("%p \n", pStr);

	//pStr = (uint8_t*)&str.b;
	//printf("%p \n", pStr);

	//pStr = (uint8_t*)&str.c;
	//printf("%p \n", pStr);

	//pStr = (uint8_t*)&str.d;
	//printf("%p \n", pStr);

	//pStr = (uint8_t*)&str.e;
	//printf("%p \n", pStr);

	//pA = &a;
	//printf("%p \n", pA);
	//*pA = 0x12345678;

	//pA_byte0 = (uint8_t*)pA	 ;
	//pA_byte1 = (uint8_t*)pA + 1 ;
	//pA_byte2 = (uint8_t*)pA + 2;
	//pA_byte3 = (uint8_t*)pA + 3;
	//printf("%p \n", pA_byte0);
	//printf("%p \n", pA_byte1);
	//printf("%p \n", pA_byte2);
	//printf("%p \n", pA_byte3);

	//printf("%X \n", *pA_byte0);
	//printf("%X \n", *pA_byte1);
	//printf("%X \n", *pA_byte2);
	//printf("%X \n", *pA_byte3);

/*	pDizi = &dizi[0]; &dizi
	printf("%p \n", pDizi);
	printf("%X \n", *pDizi);
	printf("%X \n", dizi[0]);

	printf("%X \n", *(pDizi + 1)); */

	

}


