
#include <iostream>
#include "stdint.h"

uint32_t global_data;
uint32_t value;

typedef struct
{
    int      (*ptr_x)(uint32_t, uint32_t);
    void     (*ptr_v)(void* param);

}Handle_struct;

Handle_struct Handle_st ={0};

uint32_t sum(uint32_t, uint32_t);
void     IRQ_Handler(void* param);

void    HandleInit(Handle_struct* Handle);


int main()
{
    HandleInit(&Handle_st);

    printf("%d \n ", global_data);

    Handle_st.ptr_v;

    printf("%d \n ", global_data);

    value = (Handle_st.ptr_x)(5, 3);


}



uint32_t sum(uint32_t a, uint32_t b)
{
    return a + b;
}

void     IRQ_Handler(void* param)
{
    global_data++;
}

void    HandleInit(Handle_struct* Handle)
{
    //Handle->ptr_x = &sum;
    Handle->ptr_v = &IRQ_Handler;
}