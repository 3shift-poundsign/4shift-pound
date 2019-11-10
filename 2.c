#include <stdio.h>
int main()
{
char context[1000];
int i=0;
gets(context);
while(context[i]!=0)
{
if ((context[i]>='A'&&context[i]<='V')||(context[i]>='a'&&context[i]<='v'))
context[i]=context[i]+4;
else if ((context[i]>='W'&&context[i]<='Z')||(context[i]>='w'&&context[i]<='z'))
context[i]=context[i]-22;
i++;
}
puts(context);
}
