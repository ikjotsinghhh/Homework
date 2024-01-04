#include<stdio.h>
void main()
{
    int a,b,sum=0;
    printf("Enter the numbers:");
    scanf("%d",&a);
    for(a=1;a<=10;a++)
    {
    sum=sum+a;
    }
    printf("sum=%d\n",sum);
    
}