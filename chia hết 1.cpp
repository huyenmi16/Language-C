#include<stdio.h>

int giaithua(int n)
{
	int t=1;
	for(int i=1;i<=n;i++)
	{
		t=t*i;
	}
	return t;
}
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int dem=0;
	for(int i=1;i<=k;i++)
	{
	     n=n/2;
	     dem++;
	}
	if(dem==k) printf("YES");
	else printf("NO");
	
}