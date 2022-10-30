#include <iostream>

#include "stdio.h"
#include "stdint.h"


#define DATA_1

#ifndef DATA_1_CONFIG
#define   DATA_1_CONFIG                          \
{                                                \
    .data_u8    =   0xFF               ,         \
    .data_u16   =   0xFFFF             ,         \
    .data_u32   =   0xFFFFFFFF         ,         \
    .data_u64   =   0xFFFFFFFFFFFFFFFF ,         \
}                                               
#endif // !DATA_1_CONFIG

#ifndef   DATA_2_CONFIG
#define   DATA_2_CONFIG                          \
{                                       ,        \
    .data_u8    =   0xAA                ,        \
    .data_u16   =   0xAAAA              ,        \
    .data_u32   =   0xAAAAAAAA          ,        \
    .data_u64   =   0xAAAAAAAAAAAAAAAA  ,        \
}                                               
#endif // !DATA_2_CONFIG

#ifndef   DATA_3_CONFIG
#define   DATA_3_CONFIG                          \
{                                       ,        \
    .data_u8    =   0xBB                ,        \
    .data_u16   =   0xBBBB              ,        \
    .data_u32   =   0xBBBBBBBB          ,        \
    .data_u64   =   0xBBBBBBBBBBBBBBBB  ,        \
}                                               
#endif // !DATA_3_CONFIG

#ifndef   DATA_4_CONFIG
#define   DATA_4_CONFIG                          \
{                                       ,        \
    .data_u8    =   0xCC                ,        \
    .data_u16   =   0xCCCC              ,        \
    .data_u32   =   0xCCCCCCCC          ,        \
    .data_u64   =   0xCCCCCCCCCCCCCCCC  ,        \
}                                               
#endif // !DATA_4_CONFIG

typedef struct 
{
    uint8_t  data_u8;
    uint16_t data_u16;
    uint32_t data_u32;
    uint64_t data_u64;
}dataType_st;

dataType_st data_obj[] =
{
#ifdef DATA_1
    DATA_1_CONFIG,
#endif // DATA_1

#ifdef DATA_2
    DATA_2_CONFIG,
#endif // DATA_2

#ifdef DATA_3
    DATA_3_CONFIG,
#endif // DATA_3

#ifdef DATA_4
    DATA_4_CONFIG
#endif // DATA_4
};

int main()
{

    printf("%X \n", data_obj[0].data_u8);
    printf("%X \n", data_obj[1].data_u8);

}

