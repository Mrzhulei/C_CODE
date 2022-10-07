#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				int m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
	cout<<a[0]<<" "<<a[n-1]<<endl;
	return 0;
}
