#include<stdio.h>

int main(void)
{
    int n;
    int *ptr = &n;
    *ptr = 20;
    printf("%p %d %d",ptr,n,*ptr);
    return 0;
}