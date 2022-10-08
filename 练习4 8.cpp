#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num=0;
	int num1=0;
	int num2=0;
	int n,d;
	cin>>n>>d;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=a[0]-d;i<=a[n-1]+d;i++)
	{
		for(int j=0;j<n;j++)
		{
			b[j]=abs(a[j]-i);
		}
		for(int j=0;j<n;j++)
		{
			if(b[j]==d){num1++;}
			if(b[j]>=d){num2++;}
		}
		if(num1!=0&&num2==n){num++;}
		num1=0;
		num2=0;
	}
	cout<<num<<endl;
	return 0;
}
