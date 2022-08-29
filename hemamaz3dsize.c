#include<stdio.h>
int main()
{
int i,j,k,e,size;
printf("enter the elements:\n");
for(i=0;i<2;i++)
    for(j=0;j<2;j++)
        for(k=0;k<2;k++)
            scanf("%d",i,j,k,e);

for(i=0;i<2;i++)
    for(j=0;j<2;j++)
        for(k=0;k<2;k++)
size=sizeof(e);
printf("size=%d\n",size);

}
