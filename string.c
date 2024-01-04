#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20];
    int strlength;
    printf("Enter the string\n");
    scanf("%s",&str1);
    strlength=strlen(str1);
    printf("given string length is:%d",strlength);
}