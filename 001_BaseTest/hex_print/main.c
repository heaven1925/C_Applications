#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

typedef struct
{
    int data_1;
    int data_2;
}data_st;

data_st data_s ={0};

data_st* pData_s = NULL;

void deneme(data_st* data)
{
        data->data_1 = 0xFF ;
        printf("%p \n", pData_s);
}

void test(data_st* data)
{
    pData_s = &data_s;

    data->data_1 = 10;
    data->data_2 = data->data_1;

     printf("%p \n", pData_s);

    deneme(&data);


}

int main()
{

    test(&data_s);




    return 0;
}
