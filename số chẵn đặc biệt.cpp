#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long  n;
		scanf("%lld",&n);
		int x=n%10;
		int dem=0;
		while(n!=0)
		{
			int y=n%10;
			if(y%2!=0)
			{
				dem=1;
				break; 
			}
			else
			{
				n=n/10;
			}
		}
		if(dem==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		
	}
}