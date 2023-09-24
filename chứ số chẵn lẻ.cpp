#include<stdio.h>

int main ()
{
	int n;
	scanf("%d",&n);
	int chan=0,le=0;
	while(n!=0)
	{
		if((n%10)%2==0)
		{
			chan++;
			n=n/10;
		}
		else
		{
			le++;
			n=n/10;
		}
		
	}
	printf("%d %d",le,chan);
}