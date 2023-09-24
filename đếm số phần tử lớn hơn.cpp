#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
  	while(t--)
	{ 
		int n,i; 
		scanf("%d",&n); 
		int a[100],dem=0; 
		for(i=0;i<n;i++)
		{ 
			scanf("%d",&a[i]); 
		} 
		int x=a[0]; 
		for(i=0;i<n;i++)
		{ 
			if(a[i]>=x)
			{ 
				x=a[i]; 
				dem++; 
			} 
		} 
		printf("%d\n", dem); 
	}
 }