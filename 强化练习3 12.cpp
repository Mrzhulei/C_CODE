#include<iostream>
using namespace std;
int main()
{
	int n,m,area,num;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a;
		cin>>a;
		num+=a;
	}
	if(n==1)
	{
		cout<<n; 
	}
	else
	{
		int num1=num/(n-1);
		if(num1%2==0)
		{
			area=1;
			area+=num-num1*(n-1);
			cout<<area;
		}
		else
		{
			area=n;
			area-=num-num1*(n-1);
			cout<<area;
		}
	}
	return 0; 
}
