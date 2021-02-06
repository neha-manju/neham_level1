//Write a program to find the volume of a tromboloid using one function

#include<stdio.h>
float main()
{
float h,b,d;
printf("enter the input values");
scanf("%f%f%f ",&h,&b,&d);
return h,b,d;
}
float find_volume(float h,float b, float d)
{
float volume;
volume=((h*b*d)+(d/b))/3;
return volume;
}

