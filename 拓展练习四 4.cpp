#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int b[n];
	int count=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]<=a[0])
		{
			b[count]=a[i];
			count++;
		}
	}
	b[count]=a[0];
	count++;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[0])
		{
			b[count]=a[i];
			count++;
		}
	}
	for(int i=0;i<n;i++)
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
