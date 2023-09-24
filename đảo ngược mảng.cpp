#include<stdio.h>

int main ()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int tmp;
	for(int i=0;i<n/2;i++)
	{
		tmp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=tmp;
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}