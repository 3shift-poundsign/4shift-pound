#include <stdio.h>
int main()
{
	int T,a[100],c;
	scanf("%d",&T);
	for(c=0;c<T;c++)
	{
		scanf("%d",&a[c]);
	}
	for(c=0;c<T;c++)
	{
		if((1000000%a[c])==0)
		{
			printf("%d\n",1000000/a[c]);
		}
		else
		{
			printf("No\n");
		}
	}
}
