#include<stdio.h>

#include<string.h>

int main()
{
	char s[100000];
	gets(s);
	int dem=0,tong=0,sum=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)
		{
			dem++;
		}
		else if(s[i]>='0' && s[i]<='9')
		{
			tong++;
		}
		else
		{
			sum++;
		}
	}
	printf("%d %d %d",dem,tong,sum);
}