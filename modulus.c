#include<stdio.h>
void main()
{
    int num,a;
    printf("Enter the number\n:");
    scanf("%d",&num);
     a=num%2;
    printf(" Remainder by 2:%d\n",a);
    a=num%3;
    printf(" Remainder by 3:%d\n",a);
    a=num%4;
    printf(" Remainder by 4:%d\n",a);

}