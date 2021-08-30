#include<stdio.h>

int main()
{
    int n,a,b,c;
    scanf("%d", &n);
    a=n/365;
    n=n-(a*365);
    b=n/30;
    c=n-(b*30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a,b,c);
    return 0;
