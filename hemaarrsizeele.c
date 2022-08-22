#include<stdio.h>
int main() {
int s,e,i,j;
printf("enter the size:\n");
scanf("%d",&s);
int a[s];
printf("enter the elements:\n");
for(i=0;i<s;i++)
scanf("%d",&a[i]);
printf("size = %d\n",s);
for(i=0;i<s;i++)
{
//s=((sizeof(s)/sizeof(i)));
//printf("size=%d\nelement=%d\n",s,i);
printf("%d\t",a[i]);
}
}
