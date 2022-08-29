#include<stdio.h>
int main() {
int i,n;
printf("enter the value n\n");
scanf("%d",&n);
int a[n],*p[i];
printf("enter the elements n\n");
for(i=0;i<=n;i++)
scanf("%s",&a[i]);

for(i=0;i<n;i++)
*p=&a[i];

for(i=0;i<=n;i++)
printf("%s",*p[i]);

}
