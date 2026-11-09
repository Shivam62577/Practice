// Write a C program to print all array elements using only pointer arithmetic (don't use arr[i]).

#include<stdio.h>

int main(void)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
     
}