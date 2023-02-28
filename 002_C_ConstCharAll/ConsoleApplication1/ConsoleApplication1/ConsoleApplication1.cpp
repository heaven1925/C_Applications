// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include "stdint.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main(void)
{
    const char data[10] = "Atakan";

    char* pData = &data[0];

    printf("%c \n", pData[0] );

    *pData = 'e';

    printf("%c \n", pData[0]);

}