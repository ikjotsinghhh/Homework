#include<stdio.h> 
void main()
{
    int num,i,c=0;

    printf("Enter a number:");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if (num%i==0)
        c++;
        break;
    }

{
        if(c==0&&num!=1)
        printf("%5d is a prime.\n",num); 
        else 


        printf("%d is not a prime number");

}
}