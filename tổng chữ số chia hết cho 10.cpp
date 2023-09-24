#include<stdio.h>

int check(int n)
{
	int sum=0;
	while(n>0)
	{
		int x=n%10;
		sum=sum+x;
		n=n/10;
	}
	return sum;
}

int main()
{
	int t ;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(check(n)%10==0)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
		printf("\n");
		
	}
}