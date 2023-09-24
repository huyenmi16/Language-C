#include<stdio.h>
void check (int n)
{
	for(int i=2;i<n;i++)
	{
		int dem=0;
		while(n%i==0)
		{
			dem++;
			n=n/i;
		}
		if(dem)
		{
			printf("%d^%d",i,dem);
			if(n>i)
			{
				printf(" * ");
			}
		}
	}
	if(n>1)
	{
		printf("%d^1",n);
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%d = ",n);
		check(n);
		printf("\n");
		
	}
}