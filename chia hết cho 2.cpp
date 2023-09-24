#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int dem=0;
		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0 && i%2==0)
			{
				dem++;
			}
		}
		if(n%2==0)
		{
			dem++;
		}
		printf("%d\n",dem);
	}
}