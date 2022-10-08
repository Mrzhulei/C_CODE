#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[24]={31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
	int b[24];
	int c[24];
	for(int i=0;i<24;i++)
	{
		b[i]=a[i];
		c[i]=a[i];
	}
	b[1]=29;
	c[13]=29;
	int d[n];
	int num1,num2,num3,num; 
	num1=0;
	num2=0;
	num3=0;
	num=0;
	for(int i=0;i<n;i++)
	{
		cin>>d[i];
	}
	for(int i=0;i<25-n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(d[j]==a[i+j]) {num1++;}
			if(d[j]==b[i+j]) {num2++;}
			if(d[j]==c[i+j]) {num3++;}
		}
		if(num1==n||num2==n||num3==n) {num++;}
		num1=0;
		num2=0;
		num3=0;
	}
	if(num>0) cout<<"Yes";
	else cout<<"No";
	return 0;
 } 
 
