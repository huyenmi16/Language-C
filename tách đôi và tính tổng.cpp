#include<stdio.h>
#include<string.h>
#include<math.h>
int check1(int n)
{
	int m=n;
	int dem=0;
	while(m!=0)
	{
		m=m/10;
		dem++;	
	}
	return dem;
}
int main()
{
	char s[201];
	gets(s);
	int sum=0;
	int k=strlen(s)+1;
	for(int i=0;i<strlen(s);i++)
	{
		sum=sum*10+(s[i]-'0');
	}
	while(k>1)
	{
		int z=k/2;
		int a=sum%(pow(10,3);
		int b=sum/pow(10,3);
		sum=a+b;
		printf("%d\n",sum);
		k=check1(a+b);
	}
	
	
}