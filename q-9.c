//question-9
#include<stdio.h>
int main(){
int a, b,result;
printf("enter the numbers");
scanf("%d %d",&a,&b);
result=1>>a&b;
(result==0)?printf("14th bit is set"): printf("14th bit is clear");
}
