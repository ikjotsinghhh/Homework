#include<stdio.h>
void main()
{
    int arr[30],num,i,temp,j;
    printf("Enter the size of an array:");
    scanf("%d",&num);
    printf("Enter the value of an array");
    for(i=0;i<num;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<num;i++)
{
    for(j=1;j<num-i-1;j++)
    {   
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j+1]=arr[j];
            arr[j+1]=temp;
        }
        for(i=0;i<num;i++){
            printf("print sorted element are ....");
            for(i=0;i<num;i++){
                printf("");
            }
        }
    }
}
}
