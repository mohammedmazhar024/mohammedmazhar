#include<stdio.h>
int main()
{
char a[100];
char *ptr=a;
int count=0;

printf("enter the string elements:\n");
scanf("%s",&a);

while(*ptr!='\0')
{
count++;
ptr++;
}
printf("the length=%d",count);
return 0;
}
