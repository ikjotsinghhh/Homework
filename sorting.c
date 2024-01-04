#include<stdio.h>
void main()
{
    int arr[10]={2,4,1,7,5,9,3,6,8,10},element,found=0,i;
    printf("Enter the element for search:");
    scanf("%d",&element);
    for( i=0;i<10;i++)
    {
        if(arr[i]==element)
    {
        printf("element found at the index%d element  %d\n:",i,element);
        found=1;
        break;
        }
    }
    if(!found){
        printf("element not found in the array");
    }
}