#include<stdio.h>
void main()
{
    int rollno[]={1,2,3,4,5,12},i,n,j;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the values");
    for(i=0;i<=n;i++){
    scanf("%d",&rollno[i]);
}
for(j=0;j<=n;j+=2)
{
    printf("the even values are &d",rollno[j]);
}
printf("\n");
}