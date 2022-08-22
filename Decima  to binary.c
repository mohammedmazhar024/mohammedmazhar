#include<stdio.h>
int main() {
int i,n,rem=0;
printf("enter a values:\n");
scanf("%d",&n);
 while(n>=1)
 {
 rem=n%2;
 n=n/2;
 }
 printf("Binary value is:=%d\n",n,rem);
 }
