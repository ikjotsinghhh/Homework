#include<stdio.h>

void main()
{   
    char str[100];
    printf("enter 1st string 1:\n");
    scanf("%s",&str);
    printf("Enter the string is=%s\n",str);
    printf("enter 2nd string\n");
    gets(str);
    printf("the second string is=%s\n",str);
    printf("enter 3rd string\n");
    scanf("\n%s",str);
    printf("the third string is=%s\n",str);
}