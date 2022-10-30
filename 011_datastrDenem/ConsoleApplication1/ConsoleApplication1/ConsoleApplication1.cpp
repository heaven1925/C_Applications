

#include <iostream>


typedef struct
{
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t size[100];
}a_st;


typedef struct
{
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t size[100];
}b_st;


typedef struct
{
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t size[100];
}c_st;


typedef struct
{
    uint8_t c;
    uint8_t b;
    uint8_t c;
    uint8_t c;
    uint8_t size[100];
}d_st;

typedef struct
{
    uint8_t extraSize[25];
    a_st data_a;
    b_st data_b;
    c_st data_c;
    d_st data_d;
    uint8_t extraSize[25];
};










int main()
{
    std::cout << "Hello World!\n";
}

