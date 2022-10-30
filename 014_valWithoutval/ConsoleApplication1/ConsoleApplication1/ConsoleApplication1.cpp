#include <iostream>

int main()
{
    uint8_t     a   = 0;
    uint8_t     b   = 0;
    uint8_t* p   = 0;

    a = (uint8_t)p = (uint8_t*)malloc(sizeof(a + b));

    *p = 25;

}
