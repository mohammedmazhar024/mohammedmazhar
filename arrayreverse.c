#include<stdio.h>
void main()
{
    int a[5]={1,2,8,4,5},b[5],i,j;

    for(i=0,j=4;i<=4,j>=0;i++,j--)
    {
        b[j]=a[i];

    }
    for(i=0;i<5;i++)
        printf("a[5]=%d\tb[5]=%d\n",a[i],b[i]);
}
