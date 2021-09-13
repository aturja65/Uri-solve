#include<stdio.h>

int main()
{
    int a[20000],n,max,min,i;
    scanf("%d", &n);
    while(n!=0)
    {
        for(i=0;i<2*n;i++)
        {
            scanf("%d", &a[i]);
        }
        for(i=0;i<2*n;i++)
        {
            if(i<n)
            {
                a[i]=a[i]+a[(2*n)-1-i];
            }
            else
            {
                a[i]=a[(2*n)-1-i];
            }
        }
        max=a[0];
        min=a[0];
        for(i=0;i<2*n;i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
            if(min>a[i])
            {
                min=a[i];
            }
        }
        printf("%d %d\n", max,min);
        scanf("%d", &n);
    }
    return 0;
}
