#include<iostream>
using namespace std;
int main()
{
	int n,num;
	cin>>n;
	int a[n];
	a[0]=1; 
	for(int i=0;i<n-1;i++)
	{
		a[i+1]=a[i]+2+i;
	}
	for(int j=0;j<n;j++)
	{
		num=num+a[j];
	}
	cout<<num<<endl;
	return 0;
}
