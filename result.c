#include<stdio.h>
#include<conio.h>
void main()
{
    int hindi,english,maths,physics,chemistry,total,avg;
    char grade1,grade2,grade3,grade4;
    printf("Enter the mark for hindi:");
    scanf("%d",&hindi);
     printf("Enter the mark for english:");
    scanf("%d",&english);
     printf("Enter the mark for maths:");
    scanf("%d",&maths);
     printf("Enter the mark for physics:");
    scanf("%d",&physics);
     printf("Enter the mark for chemistry:");
    scanf("%d",&chemistry);
    total=hindi+english+maths+physics+chemistry;
    avg=total/5;
    if((avg>=90)&&(avg<=100))

    {
        grade1="A";
        printf("you have scored:%c",grade1);
    }
        else if((avg>=80)&&(avg<=90))
        {
            grade2="B";
            printf("you have scored:%c",grade2);
        }
        else if((avg>=70)&&(avg<=80))
        {
            grade3="C";
            printf("you have scored:%c",grade3);
        }
        else if((avg>=50)&&(avg<=60))
        {
            grade4="D";
            printf("you have scored:%c",grade4);
        }
        else(avg>50)
        {
            printf("Fail");
        }

        }
    


