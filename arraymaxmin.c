#include<stdio.h>
int main()

{
    int a[5]={6,-2,33456,12,5},max,min,i;
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }

        if(a[i]<min)
        {

            min = a[i];
        }

    }
    printf("Max = %d, min = %d",max,min);
}
