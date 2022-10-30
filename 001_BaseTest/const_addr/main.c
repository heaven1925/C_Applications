#include <stdio.h>
#include <stdlib.h>

const char data[2][5] = { "aaaaa" , "bbbbb" };

int main()
{
    printf("%s \n %s \n", &data[1], &data[2]);


    return 0;
}
