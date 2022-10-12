#include<iostream>
using namespace std;
int main()
{
	int n,t=0;
	cin>>n;
	int a[n+1];
	for(int i=1;i<n+1;i++)
	{
		cin>>a[i];
	}
	a[0]=0;
	for(int i=0;i<n;i++)
	{
		int num=a[i]-a[i+1];
		if(num>0){t=t+num*4;}
		else if(num<0){t=t-num*6;}
	}
	t=t+n*5;
	cout<<t<<endl;
	return 0;
}
