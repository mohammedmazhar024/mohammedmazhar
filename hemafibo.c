#include<stdio.h>
int main() {
int a,b,c,n,i;
n=10;
a=2;
b=3;
printf("%d\n %d\n",a,b);
for(i=0;i<n;i++){
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}
return 0;
}
