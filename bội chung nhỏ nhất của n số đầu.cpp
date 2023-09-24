#include<stdio.h>


int ucln(int a,int b)
{
	if(a==0||b==0) return a+b;
	while(a!=b)
	{
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int x=1;
		for(int i=2;i<=n;i++)
		{
			x=(i*x)/ucln(i,x);
		}
		printf("%d\n",x);
	}
}