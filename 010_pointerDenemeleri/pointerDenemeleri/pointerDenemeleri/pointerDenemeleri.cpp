
#include <iostream>

#include "stdint.h" // degisken büyüklüğünce tanımlama yapmani sağlar.

typedef struct
{
    uint8_t     as_u8;
    uint16_t    bs_u16;
    uint32_t    cs_u32;
    union {
        uint8_t xu_u8;
        uint8_t yu_u8;
        struct
        {
            uint8_t xu_bit0 : 1;
            uint8_t xu_bit1 : 1;
            uint8_t xu_bit2 : 1;
            uint8_t xu_bit3 : 1;
            uint8_t xu_bit4 : 1;
            uint8_t xu_bit5 : 1;
            uint8_t xu_bit6 : 1;
            uint8_t xu_bit7 : 1;
        }bits;
    }data_st_ut;

}data_st;


int main()
{
    /*unsigned int */   uint8_t     a_u8    = 10;      // 0 - 255 
    /*unsigned int */   uint16_t    b_u16   = 20;      // 0 - 65536
    /*unsigned int */   uint32_t    c_u32   = 30;

    printf("%d  \n\n", a_u8);
    
    a_u8 = a_u8 + 1;
    printf("%d  \n\n", a_u8);

    uint8_t*        pa_u8;
    uint16_t*       pb_u16;
    uint32_t*       pc_u32;

    pa_u8 = &( a_u8 );
    printf("%p \n\n", pa_u8);
    pa_u8 = pa_u8 + 1;
    printf("%p \n\n", pa_u8);

    printf("\n\n");

    pb_u16 = &( b_u16 );
    printf("%p \n\n", pb_u16);
    pb_u16 = pb_u16 + 1;
    printf("%p \n\n", pb_u16);

    printf("\n\n");

    pc_u32 = &( c_u32 );
    printf("%p \n\n", pc_u32);
    pc_u32 = pc_u32 + 1;
    printf("%p \n\n", pc_u32);

    printf("\n\n");


    data_st data_s = { 0xFF ,
                        0xDEED ,
                        0xBEEFBEEF ,
                        { 0xAA },
                       };

    printf("%X \n", data_s.as_u8);
    printf("%X \n", data_s.bs_u16);
    printf("%X \n", data_s.cs_u32);


    data_st* pdata_s;

    pdata_s = &(data_s);

    printf("%p \n", pdata_s);
    printf("%p \n", (pdata_s+1));

    printf("%p \n", data_s.data_st_ut.xu_u8);
    printf("%p \n", data_s.data_st_ut.yu_u8);

    printf("%d", data_s.data_st_ut.bits.xu_bit0);
    printf("%d", data_s.data_st_ut.bits.xu_bit1);
    printf("%d", data_s.data_st_ut.bits.xu_bit2);
    printf("%d", data_s.data_st_ut.bits.xu_bit3);
    printf("%d", data_s.data_st_ut.bits.xu_bit4);
    printf("%d", data_s.data_st_ut.bits.xu_bit5);
    printf("%d", data_s.data_st_ut.bits.xu_bit6);
    printf("%d", data_s.data_st_ut.bits.xu_bit7);


}

