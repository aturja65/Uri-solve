#include<stdio.h>

int main()
{
    int t,n,res=0,i,a[11];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
            res+=a[i];
        }
        res=res+1-n;
        printf("%d\n", res);
        res=0;
    }
    return 0;
}
