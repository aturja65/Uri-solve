#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int len,i,j;
    while(gets(str)!=NULL)
    {
        j=0;
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]==' ')
            {
                continue;
            }
            else if(j%2==0 && str[i]>96)
            {
                str[i]-=32;
            }
            else if(j%2!=0 && str[i]<91)
            {
                str[i]+=32;
            }
            j++;
        }
        str[len]='\0';
        puts(str);
    }
    return 0;
}
