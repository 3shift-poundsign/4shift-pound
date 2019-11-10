#include <stdio.h>
int main()
 {
  int  a,b,n,m,h;
  scanf("%d%d,",&n,&m);
  if (n<m)
   {
    h=n;
    n=m;
    m=h;
   }
  a=n*m;
  while(m!=0)
   {
    b=n%m;
    n=m;
    m=b;
   }
  printf("%d ",n);
  printf("%d",a/n);
  return 0;
 }
