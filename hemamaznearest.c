#include<stdio.h>
int main() {
int a,b;
printf("enter the value of a and b:\n");
scanf("%d %d",&a,&b);
a=a-100;
b=b-100;
if (a>b)
printf("a is nearest\n");
else
printf("b is nearest\n");
if(a==b)
printf("its equal:\n");
return 0;
}

