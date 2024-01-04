#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter array elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int index=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            index=i;
        }
    }
    printf("Maximum element is :%d at %d",max,index);
}