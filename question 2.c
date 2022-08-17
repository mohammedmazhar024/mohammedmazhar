//question.2
#include<stdio.h>
int main(){
char ch;
int lc,uc;
printf("enter the character\n");
scanf("%c", &ch);
lc=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
uc=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
if(lc||uc)
{
    printf("%c is vowel\n", ch);
}
else {
    printf("it is not a vowel");
}
}
