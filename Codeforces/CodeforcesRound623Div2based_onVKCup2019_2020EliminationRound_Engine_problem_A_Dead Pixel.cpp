#include <stdio.h>
 
int main(void) 
{
	int i,t,a,b,x,y,xx,yy,area1,area2;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d %d",&a,&b,&x,&y);
		xx=a-x-1;
		yy=b-y-1;
		if(x>xx)
		area1=x*b;
		else
		area1=xx*b;
		if(y>yy)
		area2=y*a;
		else
		area2=yy*a;
		if(area1>area2)
		printf("%d\n",area1);
		else
		printf("%d\n",area2);
	}
}