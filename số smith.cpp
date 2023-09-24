#include<stdio.h>

int ngto(int n)
{
	int sum=0;
	for(int i=2;i<n;i++)
	{
		while(n%i==0)
		{
			sum=sum+i;
			n=n/i;
		}
	
	}
	if(n>1)
	{
		sum=sum+n;
	}
	return sum;
}

int pt(int m)
{
	int tong=0;
	while (m>0)
	{
		int x=m%10;
		tong = tong +x;
		m=m/10;
	}
	return tong;
}
int main()
{
	int n;
	scanf("%d",&n);
	int m=n;
	if(ngto(n)==pt(m))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	
}