#include<iostream>
using namespace std;
int main()
{
	int q[4];
	for(int i=0;i<4;i++)
	{
		cin>>q[i];
	}
	int a,b,c,p;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4-1-i;j++)
		{
			if(q[j]>q[j+1])
			{
				int h=q[j];
				q[j]=q[j+1];
				q[j+1]=h;
			}
		}
	}
	int m[3];
	m[0]=q[3]-q[0];
	m[1]=q[3]-q[1];
	m[2]=q[3]-q[2];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3-1-i;j++)
		{
			if(m[j]>m[j+1])
			{
				int h=m[j];
				m[j]=m[j+1];
				m[j+1]=h;
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		cout<<m[i]<<" ";
	}
	cout<<endl;
	
}
