#include<stdio.h>

int main ()
{
	int n;
	scanf("%d",&n);
	int y,dem=0;
	while (n!=0)
	{
		y=n%10;
		dem++;
		n=n/10;
		
	}
	printf("%d",dem);
}