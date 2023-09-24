#include<stdio.h>
int check(int n)
{
	int sum=0;
	while(n!=0)
	{
		int x=n%10;
		sum=sum+x;
		n=n/10;
		
	}
	return sum;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(check(a)>check(b))
	{
		printf("%d %d",b,a);
	}
	else
	{
		printf("%d %d",a,b);
	}
	
}