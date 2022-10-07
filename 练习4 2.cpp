#include<iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a[n];
	int num=0;
	int b[n];
	bool p=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(a[0]>a[1])
	{
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>=a[i+1]) num++;
			else break;
		}
	}
	else if(a[0]<a[1])
	{
		for(int i=0;i<n-1;i++)
		{
			if(a[i]<=a[i+1]) num++;
			else break; 
		}
	}
	else
	{
		for(int i=0;i<n-1;i++)
		{
			if(a[i]=a[i+1]) num++;
			else if(a[i]!=a[i+1])
			{
				num++;
				p=a[i]>=a[i+1];
				break;
			}
		}
		for(int i=num;i<n-1;i++)
		{
			bool o =a[i]>=a[i+1];
			if(o==p) num++;
			if(o!=p) break;
		}
	}
	if(num==n-1||num==n-2){}
	else
	{
		if(a[num+1]>=a[num+2])
		{
			for(int i=num+1;i<n-1;i++)
			{
				if(a[i]>=a[i+1]) num++;
				else break;
			}
		}
		else
		{
			for(int i=num+1;i<n-1;i++)
			{
				if(a[i]<a[i+1]) num++;
				else break;
			}
		}
	}
	if(num==n-1||num==n-2) cout<<"Yes";
	else cout<<"No";
	return 0;
}
