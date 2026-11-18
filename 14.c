//Sum till number length is 1


#include <stdio.h>

int numlen(int n)
{
    int lastDigit;
    int count =0;
    while(n!=0 )
    {
        lastDigit = n%10;
        count++;
        n/=10;

    }
    return count;
}

int main(void)
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    
    int count=0;
    int sum;
    while(1)
    {
        sum =0;
        int temp = number;

        while (temp!=0)
        {
            sum += temp%10;
            temp/=10;
        }
        count++;
        number = sum;
        if (numlen(sum)==1)
        {
            break;
        }
        
    }

    printf("Sum %d",sum);
    printf("Count %d",count);
    return 0;
}