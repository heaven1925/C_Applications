
#include <iostream>

#include "maib.h"


//#define     TEMPRAM_BASE     (typdef_flash_main*)0x00000050DD6FFB94UL

typedef enum
{
    FALSE = 0,
    TRUE = !FALSE,
}bool_t;


typedef enum
{
    ERR = 0,
    EOK = !ERR,
}err_t;

err_t isEven(uint32_t param);
err_t canDiviedbyFour(uint32_t param);


int main()
{
   
    err_t result = EOK;

    result = canDiviedbyFour(10);

    printf("%d \n", (uint8_t)result);

    result = canDiviedbyFour(12);
    printf("%d \n", (uint8_t)result);

    
}

err_t isEven(uint32_t param)
{
    err_t result = EOK;

    result = ( param % 2 == 0 ) ? EOK : ERR;

    return result;

}


err_t canDiviedbyFour(uint32_t param)
{
    err_t result = EOK;

    result = isEven(param);
    if (result != EOK) return ERR;

    result = (param % 4 == 0) ? EOK : ERR;

    return result;

}