#include<stdio.h>
//	 check so nguyen to 
int check(int n)
{
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if(check(i)==1)
		{
			printf("%d\n",i);
		}
	}
	
}