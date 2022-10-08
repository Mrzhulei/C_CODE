#include<iostream>
using namespace std;
int main()
{
	int n,k,o,p;
	cin>>n>>k;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		b[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]>a[j]) {b[i]++;}
		}
	}
	for(int i=0;i<k;i++)
	{
		cin>>o>>p;
		if(a[o-1]>a[p-1]) {b[o-1]-=1;}
		else if(a[o-1]<a[p-1]) {b[p-1]-=1;}
		else{}
    }
    for(int i=0;i<n;i++)
    {
    	cout<<b[i]<<" ";
	}
	return 0;
}
