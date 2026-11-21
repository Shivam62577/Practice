//swaping two numbers

#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp = *b;
    *b=*a;
    *a=temp;
}
int main(void)
{
    int a=2,b=3;
    swap(&a,&b);
    printf("a:%d b:%d",a,b);
    return 0;
}