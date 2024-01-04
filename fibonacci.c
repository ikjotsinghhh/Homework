#include<stdio.h>
void main()
{
    int i,j,n,sum;
    printf("Enter the fibonacci number:");
    scanf("%d",&j);
    for(i=1;i<=j;++i)
    {
        n=(i*i*i);
        printf("cube is :%d\n",n);
        sum=sum+n;
    }
    printf("sum of cube is:%d\n",sum);
    }