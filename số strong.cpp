#include<stdio.h>

int gt(int n)
{
	int t=1;
	for(int i=1;i<=n;i++)
	{
		t = t*i;
	}
	return t;
}
int check (int n)
{
	int sum=0;
	int m=n;
	while(n!=0)
	{
		int x= n%10;
		sum=sum+gt(x);
		n=n/10;
	}
	if(sum==m)
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
	for(int i=1;i<n;i++)
	{
		if(check(i)==1)
		{
			printf("%d ",i);
		}
	}
}