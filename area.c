#include<stdio.h>
void main()
{
float r;
printf("Enter the radius");
scanf("%f",&r);
float area,peri;
area=3.14*r*r;
peri=2*3.14*r;
printf("Area of circle=%.2f\n",area);
printf("Perimeter of circle=%.2f\n",peri);
int a;
printf("Enter the side");
scanf("%d",&a);
int area2,peri2;
area2=a*a;
peri2=4*a;
printf("Area of square=%d\n",area2);
printf("Perimeter of square=%d\n",peri2);


}