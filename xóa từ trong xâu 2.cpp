#include<stdio.h>
#include<string.h>
int main()
{ 
	int t;
	scanf("%d",&t);
	getchar();
	for(int z=1;z<=t;z++)
	{
		char a[101],b[101]; 
		gets(a); 
		gets(b); 
		char c[101];
	    int l=strlen(a),k=strlen(b); 
		for(int i=0;i<l;i++)
		{ 
			int j=0; 
			int kt=0; 
			if(a[i]==b[0])
			{ 
				for(j=1;j<k;j++)
				{ 
					if(a[i+j]!=b[j]) { kt++; } 
				} 
			} 
			if(kt==0)
			{
				 i=i+j;
			} 
			c[i]=a[i];
		}
		printf("Test %d: ",z);
		for(int i=0;i<strlen(c);i++)
		{
			printf("%c",c[i]);
		}
		printf("\n");
			
	}
	
 }