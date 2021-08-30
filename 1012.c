#include<stdio.h>
#include<math.h>
#define pi 3.14159
double triangle(double a, double c)
{
    double n,s,sum1;
    n=sqrt(a*a+c*c);
    s=(a+n+c)/2.00;
    sum1=sqrt(s*(s-a)*(s-n)*(s-c));
    return sum1;
}

double circle(double c)
{
    double sum2;
    sum2= pi*c*c;
    return sum2;
}

double trapizeum(double a,double b,double c)
{
    double sum3;
    sum3=((a+b)/2.00)*c;
    return sum3;
}

double quadro(double b)
{
    double sum4;
    sum4=b*b;
    return sum4;
}

double rectangle(double a,double b)
{
    double sum5;
    sum5=a*b;
    return sum5;
}
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("TRIANGULO: %.3lf\n", triangle(a,c));
    printf("CIRCULO: %.3lf\n", circle(c));
    printf("TRAPEZIO: %.3lf\n", trapizeum(a,b,c));
    printf("QUADRADO: %.3lf\n", quadro(b));
    printf("RETANGULO: %.3lf\n", rectangle(a,b));
    return 0;
}
