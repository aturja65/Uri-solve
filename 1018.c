#include<stdio.h>

int main()
{
    int dom,after;
    scanf("%d", &dom);
    printf("%d\n", dom);
    printf("%d nota(s) de R$ 100,00\n", dom/100);
    after=(dom%100);
    printf("%d nota(s) de R$ 50,00\n", after/50);
    after=(after%50);
    printf("%d nota(s) de R$ 20,00\n", after/20);
    after=(after%20);
    printf("%d nota(s) de R$ 10,00\n", after/10);
    after=(after%10);
    printf("%d nota(s) de R$ 5,00\n", after/5);
    after=(after%5);
    printf("%d nota(s) de R$ 2,00\n", after/2);
    after=(after%2);
    printf("%d nota(s) de R$ 1,00\n", after/1);
    return 0;
}
