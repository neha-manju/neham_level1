//WAP to find the distance between two points using structures and 4 functions.

#include<stdio.h>
#include<math.h>
struct coordinates
{
int x1,x2,y1,y2;
};
int input()
{
printf("enter the coordinates of first point");
scanf("%d%d",&x1,&x2);
printf("enter the coordinates of second points");
scanf("%d%d",&y1,&y2);
}
int distance()
{
d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
return d;
}
int output() 
{
printf("%d is the distance between the two points",d)
}
int main()
{
input();
output();
}
