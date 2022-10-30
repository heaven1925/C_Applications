#ifdef __GNUC__
#define PACK( __Declaration__ ) __Declaration__ __attribute__((__packed__))
#endif

#ifdef _MSC_VER
#define PACK( __Declaration__ ) __pragma( pack(push, 1) ) __Declaration__ __pragma( pack(pop))
#endif


#include <iostream>

uint8_t data_1 = 10;
uint32_t       data_2 = 15;


PACK(typedef struct
{
    void         (* func1)(uint32_t a, uint32_t b);
    uint32_t     (* func2)(uint32_t a, uint32_t b);
    uint8_t      dummy;
    uint16_t     (* func3)(uint32_t a, uint32_t b);
    uint8_t      (* func4)(uint32_t a, uint32_t b);
})fp_st;

fp_st fp_s = {  };

void        testFunc1(uint32_t a, uint32_t b);
uint32_t    testFunc2(uint32_t a, uint32_t b);
uint16_t    testFunc3(uint32_t a, uint32_t b);
uint8_t     testFunc4(uint32_t a, uint32_t b);


void attachPointerStruct(fp_st* function)
{
    function->func1 = &testFunc1;
    function->func2 = &testFunc2;
    function->func3 = &testFunc3;
    function->func4 = &testFunc4;
}
void test(uint32_t a, uint32_t b)
{
    attachPointerStruct(&fp_s);
    
    printf("%d \n", fp_s.func2(a, b));
    printf("%d \n", fp_s.func3(a, b));
    printf("%d \n", fp_s.func4(a, b));

    printf("%d \n", sizeof(fp_s));
    printf("%d \n", sizeof(fp_s.func1));
    printf("%d \n", sizeof(fp_s.func2));
    printf("%d \n", sizeof(fp_s.func3));
    printf("%d \n", sizeof(fp_s.func4));

}
void testFpAddress(fp_st* function)
{
    fp_st* pfpHandle = function;

    printf("%p  \n", pfpHandle);
    printf("%p  \n", pfpHandle->func1 );
    printf("%p  \n", pfpHandle->func2 );
    printf("%p  \n", pfpHandle->func3 );
    printf("%p  \n", pfpHandle->func4);
}


int main()
{
    test(10, 20);
    //printf("********\n");
    //testFpAddress(&fp_s);

    //uint8_t* pData_1 = &data_1;
    //printf("%p \n", pData_1);
    //printf("%p \n", pData_1 + 1 );

    //uint32_t* pData_2 = &data_2;
    //printf("%p \n", pData_2);
    //printf("%p \n", pData_2 + 1);

}


void        testFunc1(uint32_t a, uint32_t b)
{
    return;
}
uint32_t    testFunc2(uint32_t a, uint32_t b)
{
    return a + b;
}
uint16_t    testFunc3(uint32_t a, uint32_t b)
{
    return (uint16_t)a + a + b;
}
uint8_t     testFunc4(uint32_t a, uint32_t b)
{
    return (uint8_t)a + b + b;
}