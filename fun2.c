#include<stdio.h>
void main(){
    void add();
    add();
}
void add(int x,int y)
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    int z=a+b;
    printf("sum=%d",z);
}