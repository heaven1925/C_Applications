#include <iostream>

#include "stdint.h"
#include "stdio.h"

uint8_t** ppAllocation = NULL;
uint8_t* pAllocation = NULL;

int main()
{
    printf("*******************\n");
    ppAllocation = (uint8_t**)malloc( sizeof(uint8_t) ); // 4 Byte adres adres ayırılıyor
    /* ppAllocation'a alan ayrıldıgı zaman pAllocation'a alan ayrilmiyor ! */
    printf("ppAllocation  = %p \n", ppAllocation);
    printf("*ppAllocation = %p \n", *ppAllocation);

    /* pAllocation için de alan ayriliyor.*/
    printf("*******************\n");
    pAllocation = (uint8_t*)malloc(sizeof(uint8_t)); // 4 Byte adres adres ayırılıyor
    *ppAllocation = pAllocation; /* Adres */
    printf("ppAllocation  = %p \n", ppAllocation);
    printf("*ppAllocation = %p \n", *ppAllocation);
    printf("*******************\n");

    **ppAllocation = 0xBB;
    printf("%X \n", *pAllocation);
    printf("%X \n", **ppAllocation);

    /* ppAllocation alani free ediliyor */
    free(ppAllocation);
    printf("ppAllocation  = %p \n", ppAllocation);
    printf("*ppAllocation = %p \n", *ppAllocation);
    printf("*ppAllocation = %p \n", pAllocation);

}