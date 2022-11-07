#include<iostream>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	int a[n][2];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j][0]>a[j+1][0])
			{
				int temp1=a[j][0];
				int temp2=a[j][1];
				a[j][0]=a[j+1][0];
				a[j+1][0]=temp1;
				a[j][1]=a[j+1][1];
				a[j+1][1]=temp2;
			 } 
		}
	}
	int num=2;
	for(int i=0;i<n-1;i++)
	{
		double temp1=a[i][1]/2.0;
		double temp2=a[i+1][1]/2.0;
		double temp=a[i+1][0]-a[i][0];
		temp=temp-temp1-temp2;
		if(temp>t)
		{
			num+=2;
		}
		else if(temp==t)
		{
			num++;
		}else;
	}
	cout<<num;
}
