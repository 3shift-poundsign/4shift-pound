#include <stdio.h>
int main()
{
	int m,n,sign,c,d,zhaoritian;
	while(1)
	{
		zhaoritian=0;
		printf("����һ������2��������С�ڻ�������������������\n"); 
		scanf("%d",&d);
		if(d<3)
		{
		printf("\t������������\n");
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
	printf("����������С�ڻ����%d������\n",d);
	printf("\t��%d��\n",zhaoritian);
	zhaotiancheng:
	printf("��Ҫ�������㣬������1\n");
	printf("��Ҫ�˳����㣬������0\n");
	scanf("%d",&c); 

	if(c==0)
	{
	printf("�����������л����ʹ�ã���ӭ�´�����\n"); 
	break;
	}
	else
	{
	printf("��������\n"); 
	} 
	}
	return 0; 
}
