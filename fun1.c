#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
 
    printf("sum=%d",a+b);
}
int add(int x,int y)
{
    int z=x+y;
    return z;
}