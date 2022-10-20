#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,minX,maxX,num1=0,num2=0;
		cin>>n>>minX>>maxX;
		int w[n],b[n];
		for(int j=0;j<n;j++)
		{
			cin>>w[j]>>b[j];
		}
		for(int j=minX;j<=maxX;j++)
		{
			int temp=j;
			for(int o=0;o<n;o++)
			{
				temp=w[o]*temp+b[o];
			}
			if(temp%2==0)
			{
				num1++;
			}
			else
			{
				num2++;;
			}
		}
		cout<<num1<<" "<<num2<<endl;;
	}
	return 0;
}
