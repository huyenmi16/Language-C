#include<stdio.h>
#include<math.h>

bool ngto(int n)
{
	if(n<2) return false;
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i==0) return false;
	}
	return true;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(ngto(n))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}