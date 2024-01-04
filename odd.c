#include<stdio.h>
void main()
{   int rollno[]={1,2,3,4,5,12},i,n,j;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the values");
    for(i=0;i<=n;i++){
    scanf("%d",&rollno[i]);
    }
    for(j=0;j<=n;j+=1)
    {
        printf("the odd values are %d",rollno[j]);
    }
}