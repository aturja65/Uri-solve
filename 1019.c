#include<stdio.h>

int main()
{
    int n,a,b,c;
    scanf("%d", &n);
    a=n/3600;
    n=n-(a*3600);
    b=n/60;
    c=n-(b*60);
    printf("%d:%d:%d\n", a,b,c);
    return 0;
}
