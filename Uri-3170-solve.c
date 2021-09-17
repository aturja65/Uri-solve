#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    b/=2;
    if(b<=a)
    {
        printf("Amelia tem todas bolinhas!\n");
    }
    else
    {
        printf("Faltam %d bolinha(s)\n", b-a);
    }
    return 0;
}
