//question-1
#include<stdio.h>
int main(){
int n,x;
printf("enter the value of n\n");
scanf("%d",&n);
if((x=n%11==0)||(n%11==1&&n>11))
{
    printf("SPECIAL\n");
}
else
{
    printf("NOT SPECIAL");
}
}
