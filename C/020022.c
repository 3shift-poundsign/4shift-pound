#include <stdio.h>
int main()
{
	int m,n,sign,c,d,zhaoritian;
	while(1)
	{
		zhaoritian=0;
		printf("输入一个大于2的数，求小于或等于这个数的所有素数\n"); 
		scanf("%d",&d);
		if(d<3)
		{
		printf("\t您的输入有误\n");
		goto zhaotiancheng;
		}
	for(m=3;m<=d;m++)
	{
		for(n=2;n<m;n++)
		{
			sign=0;
			if(m%n==0)
			{
				sign=1;
				break;
			}
		}
			if(sign==0)
			{
			printf("%d\n",m);
			zhaoritian++;
			}
	}	
	printf("以上是所以小于或等于%d的素数\n",d);
	printf("\t共%d个\n",zhaoritian);
	zhaotiancheng:
	printf("如要继续计算，请输入1\n");
	printf("如要退出计算，请输入0\n");
	scanf("%d",&c); 

	if(c==0)
	{
	printf("计算结束，感谢您的使用，欢迎下次再来\n"); 
	break;
	}
	else
	{
	printf("继续计算\n"); 
	} 
	}
	return 0; 
}
