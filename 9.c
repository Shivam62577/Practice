//reverse number

#include<stdio.h>

int reverseNumber(int n)
{
    int rev = 0;
    int lastDigit;
    while(n!=0)
    {
        lastDigit = n%10;
        n /= 10;
        rev = (rev * 10) + lastDigit;
    }

    return rev;
}
int main(void)
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    printf("%d",reverseNumber(number));

    return 0;
}