#include<stdio.h>
#include<math.h>
void main()
{
    int number,r,sum=0,n;
    printf("Enter the number");
    scanf("%d",&n);
    n=number;     
    while(number>0)
    {
        r=n%10;
        sum=(r*r*r)+sum;
        n=n/10;
    }
    if(number==sum)
    printf("%d is amstrong number");
    else
    printf("%d is not an amstrong number");

}