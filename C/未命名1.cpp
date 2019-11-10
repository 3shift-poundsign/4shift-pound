#include<stdio.h>
int main()
{
	char strcat1(char a[],char b[]);
	char c[20],d[20],*i,*p;
	i=c;p=d;
	gets(c);
	gets(d);
	strcat1(i,p);
	printf("%s",c);
	return 0;
}
	char strcat1(char a[],char b[])
	{
		char *i,*p;
		i=a;p=b;
	    for(;*i!='\0';)
	    {
			i++;
		}
		for(;*p!='\0';i++,p++)
		{
			*i=*p;
		}
	} 

