#include<stdio.h>
void main(){
int x,y,*max,*min,*xptr,*yptr;
printf("enter the two numbers x and y:\n");
scanf("%d %d",&x,&y);
xptr=&x;
yptr=&y;
if(*xptr>*yptr){
max=xptr;
min=yptr;
}
else
{max=yptr;
min=xptr;
}
printf("\nlargrst=%d\n",*max);
printf("smallest=%d\n",*min);
return 0;
}

