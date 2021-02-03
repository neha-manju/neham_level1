//Write a program to add two user input numbers using one function.

#include<stdio.h>
void add(int);
int main()
{
  int a,b;
  printf("enter the input values");
  scanf("%d%d",&a,&b);
  add(a,b);
}
add(int x,int y)
{
  int z;
  z=x+y;
  printf("%d",z);
}
