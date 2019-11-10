#include <stdio.h>
int main()
{
	int a,b,c,s;
	double q,w,e[10],r[10];
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		scanf("%lf %d",&q,&c);
		e[b]=q;
		r[b]=q/2;
		for(s=1;s<c;s++)
		{
			e[b]+=q;
			q=q/2;
			r[b]=q/2;
		}
	}
	for(b=0;b<a;b++)
	{
		printf("%.2lf %.2lf\n",e[b],r[b]);
	}
	return 0;
}
