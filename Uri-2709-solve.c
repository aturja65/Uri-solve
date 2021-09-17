#include<stdio.h>

int isPrime(int n)
{
    int i;
    if(n<=1)
    {
        return 0;
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int m,n,a[1000],i,j,sum=0;
    while(scanf("%d", &m)!=EOF)
    {
        for(i=0;i<m;i++)
        {
            scanf("%d", &a[i]);
        }
        scanf("%d", &n);
        for(i=m-1;i>=0;i-=n)
        {
            sum+=a[i];
        }
        if(isPrime(sum))
        {
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        }
        else
        {
            printf("Bad boy! I’ll hit you.\n");
        }
        sum=0;
    }
    return 0;
}
