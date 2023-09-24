#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int dem=0;
		for(int i=0;i<n/2;i++)
		{
			if(a[i]!=a[n-1-i])
			{
				dem=1;
				printf("NO\n");
				break;
			}
		}
		if(dem==0)
		{
			printf("YES\n");
		}
	}
}