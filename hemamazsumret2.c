#include<stdio.h>
int main() {
int a,b,sum,sub;
printf("enter the number of a and b:\n");
scanf("%d %d",&a,&b);
sum=a+b;
sub=a-b;
printf("%d %d",sum,sub);
if (a==5||b==5||sum==5||sub==5)
return 1;
else
return 0;
}
