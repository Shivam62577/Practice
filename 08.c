//counting the digit of a number

#include<stdio.h>
#include<math.h>

int countDigits(int n)
{
    return log10(n)+1;
}

int main(void)
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    printf("%d",countDigits(number));

    return 0;
}