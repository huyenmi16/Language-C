#include<stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int x,y;
	if(a<b)
	{
		x=a;
		if(x<c)
		{
			 y=x;
			 printf("%d",y);
		}
		else
		{
			 y=c;
			 printf("%d",y);
		}
	}
	else
	{
		 x=b;
		 if(x<c)
		{
			 y=x;
			 printf("%d",y);
			 
		}
		else
		{
			 y=c;
			 printf("%d",y);
		}
	}
}