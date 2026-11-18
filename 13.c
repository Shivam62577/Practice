//lock key problem 


#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int arr[5][5];
    int row,col;

    printf("Enter the 5x5 matrix:\n");

    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);

            if (arr[i][j]==1)
            {
                row=i;
                col=j;
            }
        }
    }

    int swaps=abs(row-2)+abs(col-2);

    printf("Minimum swaps required: %d",swaps);

    return 0;
}
