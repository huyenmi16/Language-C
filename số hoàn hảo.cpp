#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}