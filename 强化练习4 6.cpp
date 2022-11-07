#include<iostream>
using namespace std;
int main()
{
	int n,s,num=0;
	cin>>n>>s;
	int h[n],m[n];
	for(int i=0;i<n;i++)
	{
		cin>>h[i]>>m[i];
	}
	int minu[n+1];
	for(int i=0;i<n+1;i++)
	{
		if(i==0)
		{
			minu[i]=-24*60-1+h[n-1]*60+m[n-1];
		}
		else
		{
			minu[i]=h[i-1]*60+m[i-1];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(minu[i+1]-minu[i]>=2*s+1)
		{
			if(i==0)
			{
				int temp=minu[i]+1+s;
				if(temp>=0)
				{
					int temp1=temp/60;
					int temp2=temp-temp1*60;
					cout<<temp1<<" "<<temp2<<endl;
					num++;
					break;
				}
			}
			else
			{
				int temp=minu[i]+1+s;
				int temp1=temp/60;
				int temp2=temp-temp*60;
				cout<<temp1<<" "<<temp2<<endl;
				num++;
				break;
			}
		}
	}
	if(num==0)
	{
		int temp=minu[n-1]+1+s;
		int temp1=temp/60;
		int temp2=temp-temp1*60;
		cout<<temp1<<" "<<temp2<<endl;
	}
}
