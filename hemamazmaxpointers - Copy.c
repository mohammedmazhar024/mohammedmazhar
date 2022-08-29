#include<stdio.h>
int main(){
int a,b;
printf("enter the number:\n");
scanf("%d %d",&a,&b);
a=a-13;
b=b-13;
if (a>b)
return 13;
else if (b<a)
return 0;
}
