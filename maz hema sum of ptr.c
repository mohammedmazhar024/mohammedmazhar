#include<stdio.h>
int main() {
int a,b,*x,*y,sum;
printf("enter two numbers\n");
scanf("%d
       %d",&a,&b);
x=&a;
y=&b;
sum=*x+*y;
printf("the sum is=%d",sum);
}
