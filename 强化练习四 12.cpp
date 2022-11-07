#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m,x1,y1,x2,y2;
		cin>>n>>m>>x1>>y1>>x2>>y2;
		int a[n][m];
		for(int j=0;j<n;j++)//区域内均为巧克力 
		{
			for(int k=0;k<m;k++)
			{
				a[j][k]=0;
			}
		}
		int temp1=x1-x2;
		int temp2=y1-y2;
		if(temp1*temp2>=0)
		{
			if(temp1<0)
			{
				temp1=-temp1;
				temp2=-temp2;
			}
			for(int j=0;j<n-temp1;j++)
			{
				for(int k=0;k<m-temp2;k++)
				{
					a[j][k]++;
				}
			}
			for(int j=temp1;j<n;j++)
			{
				for(int k=temp2;k<m;k++)
				{
					a[j][k]++;
				}
			}
		}
		else
		{
			if(temp1<0)
			{
				temp1=-temp1;
			}
			if(temp2<0)
			{
				temp2=-temp2;
			}
			for(int j=0;i<n-temp1;j++)
			{
				for(int k=temp2;k<m;k++)
				{
					a[j][k]++;
				}
			}
			for(int j=temp1;j<n;j++)
			{
				for(int k=0;k<m-temp2;k++)
				{
					a[j][k]++;
				}
			}
		}
		int all=0;
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				if(a[j][k]==0)
				{
					all++;
				}
			}
		}
		cout<<all<<endl;
	}
 } 
