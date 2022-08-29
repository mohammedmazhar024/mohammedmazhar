#include<stdio.h>
int main() {
int i,days,months;
printf("enter the days:\n");
scanf("%d",&days);
printf("enter the months:\n");
scanf("%d",&months);
for(i=1;i<days;i++)
printf("");
for(i=1;i<months;i++)
printf("%30d",i);
if(days+i-1%7==0)
printf("\n");
}

