//WAP to find the volume of a tromboloid using 4 functions.

#include<stdio.h>
float input()
{
float h,b,d;
printf("enter the input values");
scanf("%f%f%f",&h,&b,&d);
return h,b,d;
}
float evaluate_volume(float h,float b,float d)
{
float volume;
volume=((h*b*d)+(d/b))/3;
return volume;
}
void output(float h,float d,float b,float volume)
{
printf("volume of tromboloid is %f",volume);
}
float main()
{
float p,q,r,v;
p=input();
q=input();
r=input();
v=evaluate_volume(p,q,r);
output(p,q,r,v);
return 0;
}
