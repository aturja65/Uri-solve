#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,sum1,sum2;
    scanf("%lf %lf %lf", &a, &b, &c);
    d=(b*b)-(4.00*c*a);
    if(d>=0 && a!=0)
    {
        sum1=((-b)+sqrt(d))/(2*a);
        printf("R1 = %.5lf\n", sum1);
        sum2=((-b)-sqrt(d))/(2*a);
        printf("R2 = %.5lf\n", sum2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
