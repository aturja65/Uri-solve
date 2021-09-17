#include<stdio.h>

int main()
{
    int n,a,b,temp;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &a, &b);
        while(b>0)
        {
            temp=a%b;
            a=b;
            b=temp;
        }
        printf("%d\n", a);
    }
    return 0;
}
