#include<stdio.h>
int checker(int n)
{
    int i;
 if(n<=1)
 {
 return 0;
 }
 else
 {
 for(i=2;i<n;i++)
 {
 if(n%i==0)
 {
 return 0;
 }
 }
 return 1;
 }
}
int main()
{
 int n,i;
 scanf("%d", &n);
 for(i=n;i>=2;i--)
 {
 if(checker(i) && checker(i-2))
 {
 printf("%d %d\n", i-2, i);
 break;
 }
 }
 return 0;
}
