#include<stdio.h>
//	co the dung map 
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int b[101]={0};
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(b[a[i]]>1)
		{
			printf("%d ",a[i]);
			b[a[i]]=0;
		}
	}
	
}