#include <stdio.h>
int main()
{
	int a,b,c,s,z[100],x=0,v;
	while(1)
	{
	scanf("%d",&a);
	if(a==0)
		break;
	s=0;
	for(c=0;c<a;c++)
	{
		scanf("%d",&b);
		s+=b;
	}	
	z[x]=s;
	x++;
	}
	for(v=0;v<x;v++)
	{
	printf("%d\n",z[v]);
	}
	return 0; 
}
