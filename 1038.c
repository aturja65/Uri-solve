#include<stdio.h>

int main()
{
    int a,b;
    double sum;
    scanf("%d %d", &a, &b);
    if(a==1)
    {
        sum=4.00*b;
    }
    else if(a==2)
    {
        sum=4.50*b;
    }
    else if(a==3)
    {
        sum=5.00*b;
    }
    else if(a==4)
    {
        sum=2.00*b;
    }
    else if(a==5)
    {
        sum=1.50*b;
    }
    printf("Total: R$ %.2lf\n", sum);
    return 0;
}
