#include <iostream>

#include "stdint.h"
#include "stdio.h"

uint8_t** ppAllocation = NULL;
uint8_t* pAllocation = NULL;

uint32_t val = 0xDEADBEEF;

int main()
{
    
    // Double pointer bi alan allocate edildiği zaman işaret ettiği alan mevcut değil.
    ppAllocation = (uint8_t**)malloc(sizeof(uint32_t));
    printf("%p \n", *ppAllocation);

    // pAllocation'ın işaret edeceği bir alan oluşturuluyor.
    *ppAllocation = (uint8_t*)malloc(sizeof(uint32_t));
    printf("%p \n", *ppAllocation);

    // pAllocation ile ayırılan yere değer yazılıyor.
    **ppAllocation = 255;
    printf("%d\n", **ppAllocation);

    // pAllocation free ediliyor.
    free(*ppAllocation);
    printf("%d\n", **ppAllocation);

}