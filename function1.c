#include<stdio.h>
void main()
{
    int add();
    int c;
    c=add();
}
int add()
{
    int x,y;
    printf("Enter two number:");
    scanf("%d%d",&x,&y);
    int c=x+y;
    printf(" sum=%d",c);
}