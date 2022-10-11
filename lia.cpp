#include<iostream>
using namespace std;
int main()
{
	int n,g,r;
	cin>>n>>g>>r;
	int l[n+1];
	for(int i=0;i<n+1;i++)
	{
		cin>>l[i];
	}
	int q;
	cin>>q;
	int a[q];
	for(int i=0;i<q;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<q;i++)
	{
		int t=0;
		for(int j=0;j<n+1;j++)
		{
			t+=l[j];
		}
		t+=a[i];
		int b[n];
		for(int j=0;j<n;j++)
		{
			b[j]=a[i];
		}
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<j+1;k++)
			{
				b[j]+=l[k];
			}
		}
		for(int j=0;j<n;j++)
		{
			int num1=b[j]/(r+g);
			int num2=b[j]-num1*(r+g);
			if(num2==0){}
			else if(num2<g){}
			else
			{
				t=t+r+g-num2;
			}
		}
		cout<<t<<" ";
	}
	return 0;
}
