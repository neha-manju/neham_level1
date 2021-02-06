//WAP to find the volume of a tromboloid using 4 functions.

#include<stdio.h>
float input()
{
float h;
printf("enter a value");
scanf("%f",&h);
return h;
}
float find_volume(float h,float b,float d)
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
v=find_volume(p,q,r);
output(p,q,r,v);
return 0;
}
