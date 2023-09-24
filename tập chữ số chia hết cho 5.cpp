#include<stdio.h>

int ngto(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int tong(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum+=n%10;
		n=n/10;
	}
	if(sum%5==0) return 1;
	else return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	int dem=0;
	for(int i=5;i<n;i++)
	{
		int x=i;
		if(ngto(x)==1 && tong(x)==1)
		{
			printf("%d ",i);
			dem++;
		}
		printf("\n");
		printf("%d",dem);
	}
}