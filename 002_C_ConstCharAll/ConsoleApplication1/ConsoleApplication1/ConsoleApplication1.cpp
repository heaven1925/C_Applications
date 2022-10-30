// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include "stdint.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

const char data[2][5] = { "aaa\x72", "bbbb"};

int main()

{
    printf("%s \n%s \n", &data[0], &data[1]);

    uint8_t* pData = (uint8_t*)&data[0][0];

    printf("%p \n", pData);

    printf("%p \n", (pData+4) );

    printf("%c \n", *(pData + 3));

}
