//Write a program to find the sum of n different numbers using 4 functions


#include<stdio.h>
int n,arr[100],i,sum=0;
int input()
{
printf("enter the total numbers");
scanf("%d",&n);
printf("enter the array elements");
scanf("%d",&arr[100]);
}
int add()
{
for(i=0;i<n;i++)
sum=sum+arr[i];
return sum;
}
int output()
{
printf("the sum is %d",sum);
}
int main()
{ 
input();
output();
}
