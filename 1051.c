#include<stdio.h>

int main()
{
    double a,sum;
    scanf("%lf", &a);
    if(a<=2000.00)
    {
        printf("Isento\n");
    }
    else if(a>2000.00 && a<=3000.00)
    {
        sum=((a-2000.00)*0.08);
        printf("R$ %.2lf\n", sum);
    }
    else if(a>3000.00 && a<=4500.00)
    {
        sum=((a-3000.00)*0.18)+(1000.00*0.08);
        printf("R$ %.2lf\n", sum);
    }
    else if(a>4500)
    {
        sum=((a-4500)*0.28)+(1500*0.18)+(1000*0.08);
        printf("R$ %.2lf\n", sum);
    }
    return 0;
}
