#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;t++)
	{
		int n,k,money=0,num=0;
		cin>>n>>k;
		int t[n];
		int d[n];
		for(int j=0;j<n;j++)
		{
			cin>>t[j];
			cin>>d[j];
		}
		for(int j=0;j<n;j++)
		{
			num+=t[j];
			if(num<=k) {}
			else
			{
				num=num-k;
				money+=num*d[j];
				num=k;
			}
		}
		cout<<money<<endl;
	}
	return 0;
}
