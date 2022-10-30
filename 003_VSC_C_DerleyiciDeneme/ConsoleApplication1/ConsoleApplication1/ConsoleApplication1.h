#ifndef __CONSOLEAPP_H
#define	__CONSOLEAPP_H


/*****************************INCLUDES***************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
/****************************DEFINES*****************************/
#define   BASE_ADDR             0x00007FF7EC9D2BFBU                      /* Program baslangic adresi          */
#define   START_ADDR_Msk        0x0000000000000004U                      /* Register baslangic adres makrosu  */
#define   START_ADDR            (BASE_ADDR <<  START_ADDR_Msk)    /* Register baslangic adresi         */

/********************ENUMARATOR DEFINITIONS************************/




/********************VARIABLE DEFINITIONS************************/

typedef struct {
    ;
    uint8_t CR1_REG_BIT00 : 1;
    uint8_t CR1_REG_BIT01 : 1;
    uint8_t CR1_REG_BIT02 : 1;
    uint8_t CR1_REG_BIT03 : 1;
    uint8_t CR1_REG_BIT04 : 1;
    uint8_t CR1_REG_BIT05 : 1;
    uint8_t CR1_REG_BIT06 : 1;
    uint8_t CR1_REG_BIT07 : 1;
    uint8_t CR1_REG_BIT08 : 1;
    uint8_t CR1_REG_BIT09 : 1;
    uint8_t CR1_REG_BIT10 : 1;
    uint8_t CR1_REG_BIT11 : 1;
    uint8_t CR1_REG_BIT12 : 1;
    uint8_t CR1_REG_BIT13 : 1;
    uint8_t CR1_REG_BIT14 : 1;
    uint8_t CR1_REG_BIT15 : 1;
    uint8_t CR1_REG_BIT16 : 1;
    uint8_t CR1_REG_BIT17 : 1;
    uint8_t CR1_REG_BIT18 : 1;
    uint8_t CR1_REG_BIT19 : 1;
    uint8_t CR1_REG_BIT20 : 1;
    uint8_t CR1_REG_BIT21 : 1;
    uint8_t CR1_REG_BIT22 : 1;
    uint8_t CR1_REG_BIT23 : 1;
    uint8_t CR1_REG_BIT24 : 1;
    uint8_t CR1_REG_BIT25 : 1;
    uint8_t CR1_REG_BIT26 : 1;
    uint8_t CR1_REG_BIT27 : 1;
    uint8_t CR1_REG_BIT28 : 1;
    uint8_t CR1_REG_BIT29 : 1;
    uint8_t CR1_REG_BIT30 : 1;
    uint8_t CR1_REG_BIT31 : 1;
}CR1_REG_Typedef_t;


typedef struct {

    union {
        uint32_t            CR1_REG;
        CR1_REG_Typedef_t   CR1_REG_st;
    }REG0_UnionType_t;

    union {
        uint32_t            CR2_REG;
        CR1_REG_Typedef_t   CR2_REG_st;
    }REG1_UnionType_t;

    union {
        uint32_t            CR3_REG;
        CR1_REG_Typedef_t   CR3_REG_st;
    }REG2_UnionType_t;


    union {
        uint32_t            CR4_REG;
        CR1_REG_Typedef_t   CR4_REG_st;
    }REG3_UnionType_t;


    union {
        uint32_t            CR5_REG;
        CR1_REG_Typedef_t   CR5_REG_st;
    }REG4_UnionType_t;


    union {
        uint32_t            CR6_REG;
        CR1_REG_Typedef_t   CR6_REG_st;
    }REG5_UnionType_t;


    union {
        uint32_t            CR7_REG;
        CR1_REG_Typedef_t   CR7_REG_st;
    };


    union {
        uint32_t            CR8_REG;
        CR1_REG_Typedef_t   CR8_REG_st;
    };


    union {
        uint32_t            CR9_REG;
        CR1_REG_Typedef_t   CR9_REG_st;
    };


    union {
        uint32_t            CR10_REG;
        CR1_REG_Typedef_t   CR10_REG_st;
    };


    union {
        uint32_t            CR11_REG;
        CR1_REG_Typedef_t   CR11_REG_st;
    };


    union {
        uint32_t            CR12_REG;
        CR1_REG_Typedef_t   CR12_REG_st;
    };


    union {
        uint32_t            CR13_REG;
        CR1_REG_Typedef_t   CR13_REG_st;
    };


    union {
        uint32_t            CR14_REG;
        CR1_REG_Typedef_t   CR14_REG_st;
    };


    union {
        uint32_t                CHECK15_REG;
        CR1_REG_Typedef_t    CHECK15_REG_st;
    };

    uint32_t   RESERVED[4];

    union {
        uint32_t                END_REG;
        CR1_REG_Typedef_t    END_REG_st;

    };

}Register_TypeDef_t;


/********************FUNCTION PROTOTYPES*************************/

void    SetBit(Register_TypeDef_t* Reg_st);
void    CLRBit(Register_TypeDef_t* Reg_st);



#endif

