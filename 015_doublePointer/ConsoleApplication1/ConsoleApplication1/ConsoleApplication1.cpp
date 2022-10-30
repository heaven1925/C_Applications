
#include <iostream>
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "stdint.h"

typedef struct
{
    void         (*func1)(uint32_t a, uint32_t b);
    uint32_t     (*func2)(uint32_t a, uint32_t b);
    uint16_t     (*func3)(uint32_t a, uint32_t b);
    uint8_t      (*func4)(uint32_t a, uint32_t b);
}fp_st;


typedef struct
{
    fp_st* ops;
    uint32_t* opsAddr[4];

}device_st;

device_st dev;

void   fonksiyonOlustur(device_st* dev);
void        testFunc1(uint32_t a, uint32_t b);
uint32_t    testFunc2(uint32_t a, uint32_t b);
uint16_t    testFunc3(uint32_t a, uint32_t b);
uint8_t     testFunc4(uint32_t a, uint32_t b);




void   fonksiyonOlustur(device_st* dev)
{
    uint8_t loopVal;

    dev->ops->func1 = &testFunc1;

    uint32_t* pOpsAddr = (uint32_t*)malloc(sizeof(dev->opsAddr));

    for (loopVal = 0; loopVal < 5; loopVal++)
    {
        dev->opsAddr[loopVal] = (uint32_t*)(&dev->ops + loopVal);
    }

    printf("%X \n", dev->opsAddr[0]);
    printf("%X \n", dev->opsAddr[1]);
    printf("%X \n", dev->opsAddr[2]);
    printf("%X \n", dev->opsAddr[3]);

    printf("%p \n", dev->ops->func1);
    printf("%p \n", dev->ops->func2);
    printf("%p \n", dev->ops->func3);
    printf("%p \n", dev->ops->func4);


}






int main(int argc, char* argv[])
{
    fonksiyonOlustur(&dev);
  

    //char str[5] = "text";
    //char* pStr = &str[0];

    //display(&pStr);

    //printf("%p \n %p \n", *pStr, *pStr);


    return 0;
}



void        testFunc1(uint32_t a, uint32_t b)
{
    return;
}
uint32_t    testFunc2(uint32_t a, uint32_t b)
{
    return a + b;
}
uint16_t    testFunc3(uint32_t a, uint32_t b)
{
    return (uint16_t)a + a + b;
}
uint8_t     testFunc4(uint32_t a, uint32_t b)
{
    return (uint8_t)a + b + b;
}














