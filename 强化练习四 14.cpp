#include<iostream>
using namespace std;
int main()
{
	int n,m,a,d;
	cin>>n>>m>>a>>d;
	int p[m+n];
	for(int i=0;i<m+n;i++)
	{
		if(i<m)
		{
			cin>>p[i];
		}
		else
		{
			p[i]=(i-m+1)*a;
		}
	}
	for(int i=0;i<m+n-1;i++)
	{
		for(int j=0;j<m+n-i-1;j++)
		{
			if(p[j]<p[j+1])
			{
				int temp=p[i];
				p[i]=p[i+1];
				p[i+1]=temp;
			}
		}
	}
	int T=p[0];
	int num=1;
	for(int i=1;i<m+n;i++)
	{
		if(p[i]>T+d)
		{
			num++;
			T=p[i];
		}
		else
		{
			continue;
		}
	}
	cout<<num<<endl;
}
