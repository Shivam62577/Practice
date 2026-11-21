#include<stdio.h>

int main(void)
{
    int i=3;
    int *j = &i;//pointing to variable 'i'.
    printf("%d %u\n",i,&i);
    printf("%u %u\n",j,&j);
    printf("%d %d\n",*j,*(&j));

    int **k;
    k = &j;//pointing to pointer variable 'j'.
    printf("%d %d\n",*k,*(&k));
    return 0;
}