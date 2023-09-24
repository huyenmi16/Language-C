#include<stdio.h>

int ngto(int n)
{
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int check(int n)
{
	while(n!=0)
	{
		int x=n%10;
		if(ngto(x)==0) return 0;
		else
		{
			n=n/10;
		}
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		int dem=0;
		if(a<b)
		{
			for(int j=a;j<=b;j++)
			{
				if(ngto(j)==1 && check(j)==1)
				{
					dem++;
				}
			}
			printf("%d\n",dem);
		}
		else
		{
			for(int j=b;j<=a;j++)
			{
				if(ngto(j)==1 && check(j)==1)
				{
					dem++;
				}
			}
			printf("%d\n",dem);
			
		}
		
	}
	
}