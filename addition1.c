#include<stdio.h>
void main()
{
    int add(int,int);
    int sub();
    void mul(int,int);
    void div();
    int a,b,c;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("Sum=%d\n",c);
    c=sub();
    printf("subtract=%d\n",c);
    mul(a,b);
    div();
}
int add(int x,int y)
{
    int z=x+y;
    return z;
}
int sub()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    int z=x-y;
    return z;
}
void mul(int x,int y)
{
    int z=x*y;
    printf("Mul=%d\n",z);
}
void div()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    if(y!=0)
    {
        int z=x/y;
        printf("Div=%d\n",z);
    }
    else
    printf("Infinite");
}