#include<stdio.h>
void fmax(int a[],int n)
{
	int max_dx = a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max_dx)
		{
			max_dx=a[i];
		}
	}
	printf("%d\n",max_dx);
	for(int i=0;i<n;i++)
	{
		if(a[i]==max_dx)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		fmax(a,n);
		
	}
}