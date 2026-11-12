//armstrong number

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int countDigits(int n) {
    int count = 0;

    if (n == 0) {
        return 1;
    }

    while (n != 0) {
        count++;
        n /= 10;
    }

    return count;
}

bool isArmstrong(int n)
{
    int ogNumber = n;
    int sum =0;
    int digits = countDigits(n);
    while (n!=0)
    {
        int lastDigit;
        lastDigit =n%10;
        sum = sum + (int)pow((double)lastDigit,(double)digits);
        n /= 10;
    }

    if (ogNumber==sum)
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

    printf("%d",isArmstrong(number)?true:false);

    return 0;
}