#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char s[200];
		gets(s);
		int dem=1;
		for(int i=0;i<strlen(s)-1;i++)
		{
			if(s[i]==' '&& s[i+1]!=' ')
			{
				dem++;
			}
		}
		printf("%d\n",dem);
	}
}