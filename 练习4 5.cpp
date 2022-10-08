#include<iostream>
using namespace std;
int main ()
{
	int n,num;
	cin>>n;
	int a[n];
	num=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%4==0||a[i]%7==0)
		{
			num+=a[i];
		}
	}
	cout<<num<<endl;
	return 0;
}
