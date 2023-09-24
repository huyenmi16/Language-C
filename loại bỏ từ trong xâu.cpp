#include<stdio.h>
#include<string.h>
int main()
{ 
	char a[101],b[101]; 
	gets(a); 
	gets(b); 
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
		printf("%c",a[i]); 
	}
	
 }