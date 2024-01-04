#include<stdio.h>
void main()
{
    int i,n,sum=0,cube;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int j=n;j>=0;j++)
    {
        i=n%10;
        cube=i*i*i;
        sum=sum+cube;
    }
    printf("The sum of the cube is %d",sum);
}