#include<bits/stdc++.h>

using namespace std;

int max(int a, int b)
{
	if(a>b) return a;
	else return b;
}
int main()
{
	int t ;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int mid = n/2;
		int ln1=a[0];
		int ln2=a[mid];
		int x,y;
		int sum=0;
		for(int i=1;i<mid;i++)
		{
			ln1 = max(a[i],ln1);	
		}
		for(int i=1;i<mid;i++)
		{
			if(a[i]==ln1)
			{
				 x=i;
				break;
			}
		}
		for(int i=mid;i<n;i++)
		{
			ln2=max(a[i],ln2);
		}
		for(int i=mid;i<n;i++)
		{
			if(a[i]==ln2)
			{
				 y=i;
				break;
			}
		}
		for(int j=x;j<=y;j++)
		{
			sum=sum+a[j];
		}
		cout<<sum;
	}
}