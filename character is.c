// Program to check character is alphabet or digit or special character.
#include<stdio.h>
int main() {
char c;

printf("enter:\n");
scanf("%c",&c);

if ((c>='a'&&c<='z')||(c>='A'&&c<='z'))
{
printf("Alphabet=%c\n",c);
}
else if(c>='0' && c<='9')
{
printf("Digit =%d\n",c);
}
else
{
    printf("Special character=%c\n",c);
}
return 0;
}

