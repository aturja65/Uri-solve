#include<stdio.h>

int main()
{
    unsigned long long d1,d2,n,a,b;
    while(scanf("%llu %llu %llu", &d1, &d2, &n)!=EOF)
    {
        while(n--)
        {
            scanf("%llu %llu", &a, &b);
            if((a<=d1 && b<=d2) || (a<=d2 && b<=d1))
            {
                printf("Sim\n");
            }
            else
            {
                printf("Nao\n");
            }
        }
    }
    return 0;
}
