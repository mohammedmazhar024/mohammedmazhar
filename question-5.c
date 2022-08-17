//question-5
#include<stdio.h>
int main(){
int a,b,c;
printf("Roll number are");
scanf("%d %d",&a,&b);
printf("before swaping a=%d b=%d\n" ,a,b);
c=a;
a=b;
b=c;
printf("after swaping a=%d b=%d\n",a,b);
}
