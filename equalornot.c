#include<stdio.h>
void main() {
int i,j;
int a[2][2],b[2][2];
printf("enter the values:\n");
for(i=0;i<2;i++)

for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
printf("enter the values:\n");
for(i=0;i<2;i++)

for(j=0;j<2;j++)
{
scanf("%d",&b[i][j]);
}


{

if(a[i][j]==b[i][j])
{

printf("its equal:\n");
}
else
{
    printf("not equal:\n");
}
}
}
