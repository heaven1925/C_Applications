#include <stdio.h>
#include <stdlib.h>

int main()
{

    char data[13] = {0};

    sprintf(&data[0], "%u.%u" , 125 , 25);

    printf("%s \n", data);

    memcpy(&data[9], "kWH", 3);

    printf("%s \n", data);

    return 0;
}
