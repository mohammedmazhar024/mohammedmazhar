//question-10
#include<stdio.h>
int main(){
int  a,b,r;
printf("enter the number of bits");
scanf("%d %d",&a,&b);
r=1<<a&b;
(r==0)? printf("7th bit is clear"): printf("7th bit is set");
}
