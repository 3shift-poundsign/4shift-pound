#include <stdio.h>
int main()
{
    int x,y,c;
    scanf("%d %d",&x,&y);
    c=x;
    x=y;
    y=c;
    printf("%d %d",x,y);
    return 0;
}
