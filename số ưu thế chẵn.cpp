#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int x=n%10;
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
		if(x%2==0 && chan>le)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}