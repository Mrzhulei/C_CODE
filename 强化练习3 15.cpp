#include<iostream>
using namespace std;
int main()
{
	int num1,num2,p=31,all=0;
	cin>>num1>>num2; 
	int a[32];
	int b[32];
	for(int i=0;i<32;i++)
	{
		a[i]=0;
	}
	for(int i=0;i<32;i++)
	{
		b[i]=0;
	}
	while(num1)
	{
		a[p]=num1%2;
		num1/=2;
		p--;
	}
	p=31;
	while(num2)
	{
		b[p]=num2%2;
		num2/=2;
		p--;
	}
	for(int i=0;i<32;i++)
	{
		if(a[i]!=b[i])
		{
			all++;
		}
	}
	cout<<all;
	return 0;
 } 
