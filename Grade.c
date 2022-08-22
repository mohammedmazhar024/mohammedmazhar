//grade of marks
#include<stdio.h>
int main()
{
int n;
printf("enter the Marks\n");
scanf("%d",&n);

switch(n)
{
case1:(n>=90);
printf("%d is A grade\n",n);
break;

case2 : (n>=80 && n<90);
printf("%d is B grade\n",n);
break;

case3 : (n>=60 && n<80);
printf("%d is C grade\n",n);
break;

Default : printf("%d is F\n",n);
}
return 0;
}
