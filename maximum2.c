#include<stdio.h>
int max(int a,int b,int c,int d)
{
    int max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
{
    max=c;
}
if(d>max)
{
    max=d;
}
return max;
}
int main()
{
    int num1,num2,num3,num4;
    printf("Enter the four number");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    int large=max(num1,num2,num3,num4);
    printf("The largest number is :%d",large);
    return 0;
}