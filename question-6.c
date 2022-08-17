#include<stdio.h>
int main(){
int a,b,andgate,orgate,notgate;
printf("enter the inputs a and b:\n");
scanf("%d %d",&a, &b);
andgate=a&&b;
orgate=a||b;
notgate=!a;
printf("and gate output is %d\n",andgate);
printf("or gate output is %d\n",orgate);
printf("not gate output is %d\n",notgate);
}
