//question-8
#include<stdio.h>
int main(){
int a, b,result;
printf("enter the numbers");
scanf("%d %d",&a,&b);
result=1>>a&b;
(result==0)?printf("11th bit is set"): printf("11th bit is clear");
}
