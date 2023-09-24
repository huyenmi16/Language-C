#include<stdio.h>

int main ()
{
	int t ;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int x=n%10;
		int y=0;
		while (n!=0)
		{
			y=n%10;
			n=n/10;
			
		}
		if(x==y)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}