#include<stdio.h>

int main()
{
    int a,b;
    double c,avg;
    scanf("%d %d %lf", &a, &b, &c);
    avg=b*c;
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2lf\n", avg);
    return 0;
}
