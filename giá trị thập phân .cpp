#include<stdio.h>

int main ()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n ;
		scanf("%d",&n);
		printf("%.15f\n",(float) 1/n);
		
	}
	return 0 ;
}

