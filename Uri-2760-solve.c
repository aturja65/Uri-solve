#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100],str3[100],i;
    gets(str1);
    gets(str2);
    gets(str3);
    printf("%s%s%s\n%s%s%s\n%s%s%s\n", str1,str2,str3,str2,str3,str1,str3,str1,str2);
    if(strlen(str1)<=10)
    {
        printf("%s", str1);
    }
    else
    {
        for(i=0;i<10;i++)
        {
           printf("%c",str1[i]);
        }
    }
    if(strlen(str2)<=10)
    {
        printf("%s", str2);
    }
    else
    {
        for(i=0;i<10;i++)
        {
           printf("%c",str2[i]);
        }
    }
    if(strlen(str3)<=10)
    {
        printf("%s", str3);
    }
    else
    {
        for(i=0;i<10;i++)
        {
           printf("%c",str3[i]);
        }
    }

    printf("\n");
    return 0;
}
