#include<stdio.h>

int uocso(int n)
{
	int sum=1;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if(uocso(i)==1)
		{
			printf("%d ",i);
		}
	}
	
}