#include<iostream>
using namespace std;
int main ()
{
	int n,i,all;
	all=0;
	cin>>n;
	i=1;
	int a[n];
	for(int j=0;j<n;j++)
	{
		a[j]=0;
	}
	while(i<n)
	{
		if(n%i==0)
		{
			a[i-1]=i;
		}
		i++;
	}
	for(int j=0;j<n;j++)
	{
		all=all+a[j];
	}
	if(all==n)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
	return 0;
}
