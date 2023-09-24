#include <stdio.h>
#include <math.h> 
int tongchuso(int n)
{ 
	int sum=0; 
	while(n!=0)
	{ 
		sum+=n%10; 
		n/=10; 
	} 
	return sum; 
} 
int nguyento(int n)
{ 
	for(int i=2;i*i<=n;i++)
	{ 
		if(n%i==0)
		{
			 return 0; 
			 break;
		} 
	} 
	return 1; 
} 
int check(int n)
{ 
	while(n!=0)
	{ 
		if(nguyento(n%10)==0)
		{ 
			return 0; 
		}
		 n/=10; 
	} 
	return 1; 
} 
int main()
{ 
	int t; 
	scanf("%d",&t); 
	while(t--)
	{ 
		int a,b; 
		scanf("%d%d",&a,&b); 
		int cnt=0; 
		for(int i=a;i<=b;i++)
		{ 
			if(nguyento(tongchuso(i))==1 && check(i)==1 && nguyento(i))
			{ cnt++; } 
		}
 		printf("%d",cnt); 
		printf("\n"); 
	} 
}