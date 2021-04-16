//WAP to find the sum of two fractions.

#include<stdio.h>
struct fraction
{
int n,d;
}f1,f2;

fraction input(int n)
{
printf("enter the numerator of the first fraction");
scanf("%d",&f1.n);
printf("enter the denominator for the first  fraction");
scanf("%d",&f1.d);
printf("enter the numerator for the second fraction");
scanf("%d",&f2.n);
printf("enter the denominator for the second fraction");
scanf("%d",&f2.d);
}

int gcd ( int n , int d )
{
int ( n == 0 )
return d;
return gcd ( d % n , a);
}
fraction evaluate(fraction ans , fraction f1 , fraction f2)
{
ans.n = (f1.n*f2.d)+(f2.n*f1.d);
ans.d = f1.d*f2.d;
int g;
g = gcd(ans.n , ans.d);
ans.n = ans.n/g;
ans.d = ans.d/g;
return ans;
}

int output ( fraction f1 , fraction f2 , fraction ans)
{
printf("the sum of %d / %d and %d / %d is %d / %d\n",f1.n , f1.d , f2.n , f2.d , ans.n , ans.d);
}

int main()
{
fraction f1 , f2 , ans;
f1 = input()
f2 = input();
ans = evaluate(ans , f1 , f2);
output( f1 , f2 , ans);
}

