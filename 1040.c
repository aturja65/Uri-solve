#include<stdio.h>

int main()
{
    double a,b,c,d,f,avg1,sum;
    scanf("%lf %lf %lf %lf", &a,&b,&c,&d);
    avg1=((2.0*a)+(3.0*b)+(4.0*c)+(1.0*d))/10.0;
    printf("Media: %.1lf\n", avg1);
    if(avg1<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg1>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg1>=5.0 && avg1<7.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &f);
        printf("Nota do exame: %.1lf\n", f);
        sum=(avg1+f)/2.0;
        if(sum>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", sum);
    }
    return 0;
}
