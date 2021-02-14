//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
int x,y d;
 
struct points
{
int x,y;
};
int input(struct points p,struct points q)
{
printf("enter the coordinates of first point");
scanf("%d%d",&p.x,&p.y);
printf("enter the coordinates of second point")
scanf("%d%d",&q.x,&q.y);
}
int distance(struct points p,struct points q)
{
d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
return d;
}
int output(struct points p,struct points q)
{
printd("%d is the distance between the two points",d);
}
int main()
{
input();
output();
}
