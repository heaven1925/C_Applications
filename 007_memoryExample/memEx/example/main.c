
#include  "stdio.h"
#include  "stdint.h"
#include  "stdarg.h"
#include  "string.h"

uint8_t data1_algn = 0xDE;
uint8_t data2_algn = 0xAD;

uint8_t	 data_1 = 0x11;
uint16_t data_2 = 0x2222;
uint32_t data_3 = 0x33333333;

typedef struct __attribute__((packed))
{
	uint8_t data_1;
	uint16_t data_2;
	uint32_t data_3;

	uint8_t data1_algn;
	uint8_t data2_algn;
}GL;

GL GL_s = { 0xAA , 0xBBBB , 0xCCCCCCCC , 0xBE , 0xEF };

int main()
{
	printf("data = %.8X , addr = %p \n", data_1, &data_1);
	printf("data = %.8X , addr = %p \n", data_2, &data_2);
	printf("data = %.8X , addr = %p \n", data_3, &data_3);
	printf("data = %.8X , addr = %p \n", GL_s.data_1, &GL_s.data_1);
	printf("data = %.8X , addr = %p \n", GL_s.data_2, &GL_s.data_2);
	printf("data = %.8X , addr = %p \n", GL_s.data_3, &GL_s.data_3);

	printf("\n\n");

    printf("data = %.8X , addr = %p \n", GL_s.data1_algn, &GL_s.data1_algn);
	printf("data = %.8X , addr = %p \n", GL_s.data2_algn, &GL_s.data2_algn);

    printf("data = %.8X , addr = %p \n", GL_s.data1_algn, &GL_s.data1_algn);
	printf("data = %.8X , addr = %p \n", GL_s.data2_algn, &GL_s.data2_algn);
}

