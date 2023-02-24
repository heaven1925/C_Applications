#include <iostream>

/*
Bir "pointerın pointerı" (double pointer), başka bir deyişle bir işaretçinin kendisi de bir işaretçi 
olan bir işaretçi olduğu anlamına gelir. Bu, işaretçilerin hafızadaki adreslerini tutmak için kullanılan 
bir veri türüdür. Örneğin, bir "char" türündeki işaretçilerin bir dizisini gösteren bir işaretçi, 
"char **" türünde olacaktır.
*/

uint32_t** ppA;
uint32_t* pA;

uint32_t** ppB;
uint32_t* pB;

uint32_t b;

int main()
{
    uint32_t a = 0xDEADBEEF;

    volatile uint32_t     c;
    volatile uint32_t**   ppC;
    volatile uint32_t*    pC;

    //[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
    pA  =    &a;    /* pA , a'nın   adresini tutar. */
    ppA =   &pA;    /* p  , pA'nın  adresini tutar. */
    printf("%p \n", pA);
    printf("%p \n", ppA);
    printf("%X \n", *pA);
    printf("%X \n", **ppA);
    printf("%X \n", *(uint32_t*)&ppA );
    //]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]
    printf("*****************\n");
    //[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
    pB = &b;    /* pA , a'nın   adresini tutar. */
    ppB = &pB;    /* p  , pA'nın  adresini tutar. */
    printf("%p \n", pB);
    printf("%p \n", ppB);
    printf("%X \n", *pB);
    printf("%X \n", **ppB);
    printf("%X \n", *(uint32_t*)&ppB);
    //]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]
    printf("*****************\n");
    //[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
    pC = &c;    /* pA , a'nın   adresini tutar. */
    ppC = &pC;    /* p  , pA'nın  adresini tutar. */
    printf("%p \n", pC);
    printf("%p \n", ppC);
    printf("%X \n", *pC);
    printf("%X \n", **ppC);
    printf("%X \n", *(uint32_t*)&pC);
    //]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]
}

