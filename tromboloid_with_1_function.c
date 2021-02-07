//Write a program to find the volume of a tromboloid using one function


#include<stdio.h>
float main()
{
float h,b,d,volume;
printf("enter the input values");
scanf("%f%f%f ",&h,&b,&d);
volume=((h*b*d)+(d/b))/3;
printf("%f",volume);
}

