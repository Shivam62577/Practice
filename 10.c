//palindrome - number

#include<stdio.h>
#include<stdbool.h>

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

bool isPalindrome(int n)
{
    if (reverseNumber(n)==n)
    {
        return true;
    }
    return false;
}

int main(void)
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    printf("%d",isPalindrome(number)?true:false);

    return 0;
}