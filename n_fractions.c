//WAP to find the sum of n fractions.

#include<stdio.h>
typedef struct
{
int n,d;
}fraction;

fraction input_one()
{
fraction f;
printf("enter the numerator for fraction");
scanf("%d",&f.n);
printf("enter the denominator for fraction");
scanf("%d",&f.d);

}

int frac_n()
{
int n;
printf("enter the number of fractions");
scanf("%d",&n);
return n;
}

void input_n(int n,fraction x[n])
{
for(int i=0 ; i<n ; i++)
x[i] = input_one();
}

 int gcd(int n , int d)
{
temp = n;
n = d%n ;
d = temp;return d;
}

fraction evaluate_one(fraction f1, fraction f2)
{
fraction ans;
}

ans.n = (f1.n * f2.d)+(f2.n * f1.d);
ans.d = f1.d * f2.d;
int g = gcd(ans.n , ans.d);
ans.n = ans.n/g;
and.d = ans.d/g;
return ans;
}
fraction evaluate_n(int n , fraction x[n])
{
fraction temp;
temp.n = 0;
temp.d = 1;
for(int i = 0 ; i<n ; i++)
temp = evaluate _one(temp , x[i]);
return temp;
}
void output(fraction x[] , int n , fraction ans)
{
printf("the sum of the fractions is ");
for ( int i = 0 ; i<n ; i++)
printf("%d%d",x[i].n , x[i].d):
printf("is %d%d",ans.n , ans.d);
}
void main()
{
int n = frac_n();
fraction x[n];
input_n(n,x);
fraction final_res;
final_res = evaluate_n(n,x);
output(x , n , final_res);
}
