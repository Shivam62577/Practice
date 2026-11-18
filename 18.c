//Create a structure complex containing real and imaginary parts. Input two complex numbers and calculate their sum.

#include<stdio.h>

typedef struct complex
{
    int real;
    int img;
}cpmx;


int main(void)
{
    cpmx num[2];
    for (int i = 0; i < 2; i++)
    {
        scanf("%d %d",&num[i].img,&num[i].real);
    }

    int resReal = 0;
    int resImg = 0;

    resReal = num[0].real + num[1].real;
    resImg = num[0].img + num[1].img;

    printf("%d %d",resReal,resImg);
    return 0;
}