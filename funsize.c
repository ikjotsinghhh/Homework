#include<stdio.h>
int avg(int[],int);
void main()
{
    int mark[]={77,88,99,88,99};
    int size,average;
    size=sizeof(mark)/sizeof(mark[0]);
    average=avg(mark,size);
    printf("average=%d\n",average);
    printf("Inside the main fun size at the average(in bytes)is:%d\n",sizeof(mark));
}
int avg(int mark1[],int size)
{       
    int i,sum=0,average=0;
    for(i=0;i<size;i++)
    {
        size=sum+mark1[i];
        average=sum/size;
        }
      printf("Inside the sub main fun size of the array(in bytes)is:%d\n",sizeof(mark1));
      return average;
    }