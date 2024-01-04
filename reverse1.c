#include<stdio.h>
void main()
{
    int a[100]={1,2,3,4,5,6,7,8,9,10},i;
    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    for(i=10;i>0;i--){
        printf("%d\n",(a[i]));
    }
}