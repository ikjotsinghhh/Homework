#include<stdio.h>
void main()
{
    int i,j;
    float number,maximum;
    printf("Enter the number of elements:");
    scanf("%d",&i);
    maximum=-999999999;
    for(i=0;i<=number;++i)
    {
        for(j=0;j<=i;++j)
        {
            printf("Enter number:");
            if(number>maximum)
            {
                maximum=number;

            }
        }
        printf("Maximum number is:%.2f\n",maximum);

    }
}