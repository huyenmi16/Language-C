#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int k;
	scanf("%d",&k);
	for(int i=k;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	for(int i=1;i<=k;i++)
	{
		printf("%d ",a[i]);
	}
}