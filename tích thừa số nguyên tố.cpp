#include<stdio.h>

int main ()
{
	int t ;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int tich=1;
		for (int i=2;i*i<=n;i++)
		{
			if (n % i == 0)
	        {
	            tich *= i;
	            while (n % i == 0)
	                n /= i;
	        }
		}
		if(n>1)
		{
			tich=tich*n;
		}
		printf("%d",tich);
	}
}