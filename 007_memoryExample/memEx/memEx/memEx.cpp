
#include <iostream>

#include  "stdio.h"
#include  "stdint.h"
#include  "stdarg.h"
#include  "string.h"

uint8_t	 data_1 = 0x11;
uint16_t data_2 = 0x22;
uint32_t data_3 = 0x33;
uint64_t data_4 = 0x44;

__packed typedef struct 
{
	uint8_t data_1;
	uint16_t data_2;
	uint32_t data_3;
	uint64_t data_4;
}GL;

GL GL_s = { 0xAA , 0xBB , 0xCC , 0xDD};

int main()
{
	printf("%X \n", &data_1);
	printf("%X \n", &data_2);
	printf("%X \n", &data_3);
	printf("%X \n", &data_4);
	printf("%X \n", &GL_s.data_1);
	printf("%X \n", &GL_s.data_2);
	printf("%X \n", &GL_s.data_3);
	printf("%X \n", &GL_s.data_4);

}

