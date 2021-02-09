//WAP to find the distance between two point using 4 functions.

#include<stdio.h>
int x1,x2,y1,y2,d;
{
printf("enter the coordinates of first point");
scanf("%d%d",&x1,&x2);
printf("enter the coordinates of second point");
scanf("%d%d",&y1,&y2);
}
int distance()
{
d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output()
{
printf("%d is the distance between the two points,d");
}
void main()
{
int a1,a2,b1.b2,c;
a1=input();
a2=input();
b1=input();
b2=input();
c=distance(a1,a2,b1.b2);
output(a1,a2,b1,b2,c);
return 0;
}

