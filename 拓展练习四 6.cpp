#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int b[n+1];
	if(k>a[0])
	{
		b[0]=k;
		for(int i=1;i<n+1;i++)
		{
			b[i]=a[i-1];
		}
	}
	else if(k<a[n-1])
	{
		b[n]=k;
		for(int i=0;i<n;i++)
		{
			b[i]=a[i];
		}
	}
	else
	{
		int temp;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>=k&&a[i+1]<=k)
			{
				temp=i;
				break;
			}
		}
		for(int i=0;i<=temp;i++)
		{
			b[i]=a[i];
		}
		b[temp+1]=k;
		for(int i=temp+2;i<n+1;i++)
		{
			b[i]=a[i-1];
		}
	}
	for(int i=0;i<n+1;i++)
	{
		if(i==0)
		{
			cout<<b[i];
		}
		else
		{
			cout<<" "<<b[i];
		}
	}
}
