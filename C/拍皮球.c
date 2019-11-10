#include <stdio.h>
int main()
{
	int a,b;
	int q[2],i,o,p[10];
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		scanf("%d%d%d",&q[0],&q[1],&q[2]);
		i=(q[0]+q[1]+q[2])/3;
		p[b]=0;
		for(o=0;o<3;o++)
		{
			if(q[o]>i)
				p[b]++;
		}
	}
	for(b=0;b<a;b++)
	{
		if(p[b]>=2)
		{
		printf("Yes\n");
		}
		else
		{
		printf("No\n");
		} 
	}
	return 0;
}
