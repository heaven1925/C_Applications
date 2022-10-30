

#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "ConsoleApplication1.h"

uint32_t a = 10;
uint32_t* pData = NULL;

Register_TypeDef_t  Registers_st = {0};

Register_TypeDef_t* pRegisters_st;


int main() {

    pData = &a;

    Registers_st = { 0xFFFFFFFF, 0xAAAAAAAA, 0xBBBBBBBB, 0xCCCCCCCC };

    pRegisters_st = ((Register_TypeDef_t*)((uint32_t*)(pData + 1)));

    printf("%p \n", pData);
    printf("%p \n", pRegisters_st);

    printf("\n\n\n\n", pData);

    printf("%X \n", Registers_st.REG0_UnionType_t.CR1_REG);
    printf("%X \n", Registers_st.REG1_UnionType_t.CR2_REG);
    printf("%X \n", Registers_st.REG2_UnionType_t.CR3_REG);
    printf("%X \n", Registers_st.REG3_UnionType_t.CR4_REG);

    *pRegisters_st = Registers_st ;

    printf("\n\n\n\n", pData);
    printf("%p \n", pRegisters_st);

    printf("\n\n\n\n", pData);
    printf("%X \n", pRegisters_st->REG0_UnionType_t.CR1_REG);
    printf("%X \n", pRegisters_st->REG1_UnionType_t.CR2_REG);
    printf("%X \n", pRegisters_st->REG2_UnionType_t.CR3_REG);
    printf("%X \n", pRegisters_st->REG3_UnionType_t.CR4_REG);

    printf("\n\n\n\n", pData);
    printf("%p \n", &(pRegisters_st->REG0_UnionType_t.CR1_REG));
    printf("%p \n", &(pRegisters_st->REG1_UnionType_t.CR2_REG));
    printf("%p \n", &(pRegisters_st->REG2_UnionType_t.CR3_REG));
    printf("%p \n", &(pRegisters_st->REG3_UnionType_t.CR4_REG));
 

    return 0;
}


void    SetBit(Register_TypeDef_t* Reg_st) {

    //int a, b;

    printf("Hangi Regıstera erısmek ıstıorsun");

   // scanf("%d", &a);

    //Reg_st += a;

    printf("Hangı bıtını set etmek ıstıyorsun");
   // scanf("%d", &b);

    //Reg_st->CR1_REG_st.CR1_REG_BIT00 |= 1 << b;


}

void    CLRBit(Register_TypeDef_t* Reg_st) {






}



