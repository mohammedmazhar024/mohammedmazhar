#include<stdio.h>
int main() {
int a[i][j],b[i][j],c[i][j];
printf("enter the values:\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d",c[i][j]);
}
}
