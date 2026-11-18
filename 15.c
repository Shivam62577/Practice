
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool isprime(int n)
{
    if (n<2)
    {
        return false;
    }
    for (int i = 2; i*i <=n ; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
    
    
}
int main(void)
{
    int p=2,q=3;
    int n;
    scanf("%d",&n);
    while (q+1<n)
    {
        if (p+q+1==n)
        {
            printf("y %d %d",p,q);
            return 0;
        }
        p=q;
        q++;
        while (!isprime(q))
        {
            q++;
        }
        
    }
    printf("n");

    return 0;
}