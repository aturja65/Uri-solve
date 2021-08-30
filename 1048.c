#include<stdio.h>

int main()
{
    double a,sum1,sum2;
    scanf("%lf", &a);
    if(a>=0.00 && a<=400.00)
    {
        sum1=a+((a*15)/100.00);
        sum2=a*.15;
        printf("Novo salario: %.2lf\n", sum1);
        printf("Reajuste ganho: %.2lf\n", sum2);
        printf("Em percentual: 15 %%\n");
    }
    else if(a>400.00 && a<=800.00)
    {
        sum1=a+((a*12)/100.00);
        sum2=a*0.12;
        printf("Novo salario: %.2lf\n", sum1);
        printf("Reajuste ganho: %.2lf\n", sum2);
        printf("Em percentual: 12 %%\n");
    }
    else if(a>800.00 && a<=1200.00)
    {
        sum1=a+((a*10)/100.00);
        sum2=a*0.10;
        printf("Novo salario: %.2lf\n", sum1);
        printf("Reajuste ganho: %.2lf\n", sum2);
        printf("Em percentual: 10 %%\n");
    }
    else if(a>1200.00 && a<=2000.00)
    {
        sum1=a+((a*7)/100.00);
        sum2=a*0.07;
        printf("Novo salario: %.2lf\n", sum1);
        printf("Reajuste ganho: %.2lf\n", sum2);
        printf("Em percentual: 7 %%\n");
    }
    else
    {
        sum1=a+((a*4)/100.00);
        sum2=a*0.04;
        printf("Novo salario: %.2lf\n", sum1);
        printf("Reajuste ganho: %.2lf\n", sum2);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
