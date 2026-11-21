/*
Create a structure and union containing:
int a;
float b;
char c;


Print their sizes using sizeof.

Explain the difference in memory allocation.
*/

#include<stdio.h>

struct test1{
    int a;
    float b;
    char c;
};

union test2
{
    int a;
    float b;
    char c;
};

int main(void){
    struct test1 t1;
    union test2 t2;
    printf("%d %d",sizeof(t1),sizeof(t2));
    return 0;
}
