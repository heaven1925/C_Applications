#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "stdint.h"
#include "stdarg.h"

#define   AD_KARAKTER_UZUNLUGU          10
#define   SOYAD_KARAKTER_UZUNLUGU       10

typedef struct
{
    char ad[AD_KARAKTER_UZUNLUGU];
    char soyad[SOYAD_KARAKTER_UZUNLUGU];
    int  no;
    float boy;
}kimlik_st;

kimlik_st ogrenci_01 = { "iREM", "ONER" , 143 , 1.65 };

int main()
{
    uint8_t* kimlikBilgiDeposu = (uint8_t*)malloc(sizeof(kimlik_st));
    memcpy(&kimlikBilgiDeposu[0], &ogrenci_01.ad[0] , sizeof(kimlik_st) );

    printf("%s ", ogrenci_01.ad );
    printf("%s ", ogrenci_01.soyad );
    printf("%d ", ogrenci_01.no );
    printf("%f ", ogrenci_01.boy );
    // Döngü öncesi bilgilerin bastýrýlmasý
    printf("\n******************* ", ogrenci_01.boy );
    //buffer bilgilerinin bastýrýlmasý
    int totalSize = sizeof(kimlik_st);
    int j = sizeof(ogrenci_01.ad );
    printf("\n %d %d \n", totalSize, j);
    // bilgilerin adresle bastýrýlmasi
    for(int i = 0 ; i< sizeof( ogrenci_01.ad ) ; i++)
    {
       printf("%c", *(kimlikBilgiDeposu + i) );
    }

    while( '\0' == *(kimlikBilgiDeposu + j + 5) ) // Neden 5 ? araþtýr :D
    {
        printf("%c", *(kimlikBilgiDeposu + j) );
        j++;
    }

    //.. numara ve boyu yazma kýsmýný sana býraktým. :)


}
