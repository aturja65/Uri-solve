#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if((c<a && c<b) && a<b)
    {
        printf("%d\n%d\n%d\n", c,a,b);
        printf("\n%d\n%d\n%d\n", a,b,c);
    }
    else if((c<a && c<b) && b<a)
    {
        printf("%d\n%d\n%d\n", c,b,a);
        printf("\n%d\n%d\n%d\n", a,b,c);
    }
    else if((a<c && a<b) && b<c)
    {
        printf("%d\n%d\n%d\n", a,b,c);
        printf("\n%d\n%d\n%d\n", a,b,c);
    }
    else if((a<c && a<b) && c<b)
    {
        printf("%d\n%d\n%d\n", a,c,b);
        printf("\n%d\n%d\n%d\n", a,b,c);
    }
    else if((b<c && b<a) && c<a)
    {
        printf("%d\n%d\n%d\n", b,c,a);
        printf("\n%d\n%d\n%d\n", a,b,c);
    }
    else if((b<c && b<a) && a<c)
    {
        printf("%d\n%d\n%d\n", b,a,c);
        printf("\n%d\n%d\n%d\n", a,b,c);
    }
    return 0;
}
