#include<stdio.h>

int main()
{ 
	int n,m,i,j; 
	scanf("%d %d",&n,&m); 
	if(n>m)
	{ 
		for(i=1;i<m;i++)
		{ 
			int d=i-1; 
			for(j=1;j<=m-i+1;j++)
			{ 
				d++; 
				printf("%d",d);
		    } 
			for(j=m-i+2;j<=m;j++)
			{ 
				d--; 
				printf("%d",d); 
			}
			 printf("\n"); 
		}
	   for(i=m;i<=n;i++)
	   { 
	   		int e=i; 
			for(j=1;j<=m;j++)
			{ 
				printf("%d",e); 
				e--;
		    } 
			printf("\n");
	    } 
   }
   else
   { 
   		for(i=1;i<=n;i++)
		{ 
			int d=i-1; 
			for(j=1;j<=m-i+1;j++)
			{ 
				d++; 
				printf("%d",d); 
			} 
			for(j=m-i+2;j<=m;j++)
			{
			    d--; 
				printf("%d",d); 
			} 
			printf("\n");
	    } 
   }
 }