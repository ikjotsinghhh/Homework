#include<stdio.h>
void main()
{
    int n,rev,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
{
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
}
if(n==rev){
    printf("Number is palindromic");
}
else{
    printf("Number is not palindormic=%d",rev);
}

}