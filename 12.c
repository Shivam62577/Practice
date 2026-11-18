// divisor or factor of a number

#include<stdio.h>

int main(void)
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    for (int i = 1; i*i <= number; i++)
    {
        if (number%i == 0)
        {
            printf("%d ",i);

            if (number/i != i)
            {
                printf("%d ",number/i);
            }
        }
    }

    return 0;
}



