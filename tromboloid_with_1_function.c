//Write a program to find the volume of a tromboloid using one function

#include<stdio.h>
void volume();
int main()
{
  volume();
}
volume()
{
  int h,d,b,vol;
  printf("enter the input values");
  scanf("%d%d%d",&h,&d,&b);
  vol=1/3((h*d*b)+(d/b));
  printf("%d",vol);
}
  
