#include<stdio.h>
void main()
{
    int n,i,j,a[i],b[j];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    printf("%d\t%d\n",a[i],i);
    }
}
