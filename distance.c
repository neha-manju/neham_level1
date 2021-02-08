//WAP to find the distance between two point using 4 functions.

#include<stdio.h>
int input()
{
int x;
printf("enter one of the input value");
scanf("%d",&x);
return x;
}
int evaluate_distance(int x,int y);
(
int distance;
distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
return distance;
}
void output(int x,int y,int d)
{
printf("distance between %d and %d is %d",x,y,d);
}
int main()
{
int p,q,r;
p=input();
q=input();
r=evaluate_distance(p,q);
output(p,q,r);
return 0;
}
