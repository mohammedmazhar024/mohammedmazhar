#include<stdio.h>
int main() {
int a[5]={1,2,3,4,5},b[5],i;
for(i=0;i<5;i++)
{
    b[i]=a[i];
}
 for (i=0;i<5;i++)
 {

    printf("original=%d\n" "copy=%d\n",a[i],b[i]);
}
return 0;

}
