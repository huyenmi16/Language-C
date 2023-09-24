#include<stdio.h>

void ngto(int n)
{
	for(int i=2;i<n;i++)
	{
		int dem=0;
		while(n%i==0)
		{
			dem++;
			n=n/i;
		}
		if(dem>0)
		{
			printf("%d(%d) ",i,dem);
		}
	}
	if(n>1)
	{
		printf("%d(1)",n);
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		int n;
		scanf("%d",&n);
		printf("Test %d: ",i);
		ngto(n);
		printf("\n");
		
	}
}