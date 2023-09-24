#include<stdio.h>
#include<string.h>

char a[11]="0123456789";
void check(char s[])
{
	int c=0,l=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[0]=='0') 
		{
			printf("INVALID\n");
			return;
		}
		if(s[i]<'0'|| s[i]>'9')
		{
			printf("INVALID\n");
			return;
		}
		else
		{
			for(int j=0;j<10;j++)
			{
				if(s[i]==a[j])
				{
					if((s[i]-'0')%2==0) c++;
					else l++;
				}
			}
			
		}
	}
	if(c>l && l==0 ||l>c && c==0 )
	{
		printf("NO\n");
	}
	else if(c>l ||l>c)
	{
		printf("YES\n");
	}
	else 
	{
		printf("INVALID\n");
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char s[1001];
		gets(s);
		check(s);
		
	}
}