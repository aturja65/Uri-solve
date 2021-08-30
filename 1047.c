#include<stdio.h>

int main()
{
    int a,b,c,d,dif,hour,min;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    dif=((c*60+d)-(a*60+b));
    if(dif>0)
    {
        hour=dif/60;
        min=dif%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, min);
    }
    else if(dif<0)
    {
        dif=(24*60)+dif;
        hour=dif/60;
        min=dif%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, min);
    }
    else
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    return 0;
}
