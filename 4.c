// Write a function that accepts two integers using pointers and returns their sum through a pointer parameter.

#include<stdio.h>
void sum(int *a,int *b,int *res)
{
    *res = *a + *b;
}
int main(void)
{
    int a=2,b=3;
    int res;
    sum(&a,&b,&res);
    printf("%d",res);
    return 0;
}