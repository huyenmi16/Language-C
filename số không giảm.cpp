#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
bool check(int n)
{
	string s= n.ToString();
	for(int i=1;i<s.length();i++)
	{
		if(s[i]<s[i-1])
		{
			break;
			return false;
		}
	}
	return true;
}

int main ()
{
	int t ;
	scanf("%d",&t);
	while (t--)
	{
		int n ;
		scanf("%d",&n);
		for(int i=pow(10,n);i<pow(10,n+1);i++)
		{
			if(check(i)==true)
			{
				printf("%d ",i);
			}
		}
	}
}