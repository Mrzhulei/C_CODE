#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n; 
	int a[n];
	a[n-1]=1;
	for(int i=n-1;i>0;i--)
	{
		a[i-1]=2*a[i]+2;
	}
	cout<<a[0]<<endl;
	return 0;
	
}
