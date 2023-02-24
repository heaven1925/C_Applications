
#include "stdint.h"
#include <stdlib.h>
#include "stdio.h"

typedef struct
{
    uint8_t ad;
    uint8_t soyad;
    uint8_t id;
}kimlik;

uint8_t* pFuncData;
void incData(uint8_t data);

int main()
{
    uint8_t dataBss;
    uint8_t data = 10;

    uint8_t* p1 = &dataBss;
    uint8_t* p2 = &data;

    printf("%p \n", p1);
    printf("%p \n", p2);

    uint8_t* pDynamic = (uint8_t*)malloc( sizeof(kimlik) );

    printf("%p \n", pDynamic);

    static uint8_t dataS = 8;
    uint8_t* p3 = &dataS;

    printf("%p \n", p3);

    for(uint8_t i = 0 ; i< 10 ; i++)
    incData(dataS);


}

void incData(uint8_t data)
{
    static uint8_t data_5;
    data_5 = data;
    pFuncData = &data_5;
    printf("%p \n", pFuncData);
}