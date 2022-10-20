#include<iostream>
using namespace std;
int main()
{
	int n,all=1;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(num[i]>=num[i+1])
		{
			all++; 
		}
	}
	int number[all];
	int o=0;
	for(int i=0;i<n-1;i++)
	{
		if(num[i]>=num[i+1])
		{
			number[o]=num[i];
			o++;
		}
	}
	number[o]=num[n-1];
	cout<<all<<endl;
	for(int i=0;i<all;i++)
	{
		cout<<number[i]<<" ";
	}
	cout<<endl; 
}
