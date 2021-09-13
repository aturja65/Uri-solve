#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,rem,quo;
    scanf("%d %d", &a, &b);
    rem=a%b;
    if(rem<0)
    {
        rem+=abs(b);
    }
    quo=(a-rem)/b;
    printf("%d %d\n", quo, rem);
    return 0;
}
