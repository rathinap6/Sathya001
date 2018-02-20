#include <stdio.h>
#include<string.h>
void main() 
{
    char a[10];
    int b=0,i;
    scanf("%s",a);
    int n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            b=0;
        }
        else
        {
            b=1;
            printf("no");
            break;
        }
    }
    if(b==0)
    {
        printf("yes");
    }
    return 0;
}
