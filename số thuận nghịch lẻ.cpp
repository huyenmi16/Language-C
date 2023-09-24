#include<stdio.h>

bool check(int n)
{
	int sum=0,tong=0;
	int m=n;
	while(n>0)
	{
		int x=n%10;
		if(x%2==0)
		{
			return false;
		}
		else
		{
			sum=sum*10+x;
			tong=tong+x;
			n=n/10;
		}
	}
	if(sum==m && tong%2!=0)
	{
		return true;
	}
	else
	{
		return false;
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
		if(check(n))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		
	}
}