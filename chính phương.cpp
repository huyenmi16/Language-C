#include<stdio.h>
#include<math.h>

int main ()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		int x= sqrt (n);
		if(x*x==n || (x+1)*(x+1)==n)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}