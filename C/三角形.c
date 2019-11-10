#include <stdio.h>
int main()
{
	double a,b,c,x1,x2,d;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a==0)
	{
		printf("is not a quadratic!");
	}
	else
	{
	d=b*b-4*a*c;
	if(d>0)
	{
		x1=(-1*b+sqrt(d))/(2*a);
		x2=(-1*b-sqrt(d))/(2*a);
		printf("%.4lf %.4lf",x1,x2);
	} 
	else if(d==0)
	{
		x1=(-1*b)/(2*a);
		printf("%.4lf",x1);
	}
	else
	{
		printf("input error!");
	}
	}
	return 0;
}
