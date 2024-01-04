#include<stdio.h>
void main()
{
    int i,n,sum=0,cube;
    printf("Enter the number:");
    scanf("%d",&n);
    
        while(n>=0)
        { 
            i=n%10;
            cube=i*i*i;
            sum=sum+cube;
            n/=10;
        }
        printf("sum of the cube is %d\n",sum);
    }
    
