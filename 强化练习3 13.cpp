#include<iostream>
using namespace std;
int main()
{
	int num,all=1;
	cin>>num;
	cout<<num<<" ";
	int num1=num;
	if(num/10!=0)
{
	
	while(num1)
	{
		int temp=num1%10;
		if(temp!=0)
		{
			all*=temp;
		}
		num1/=10;
	}
	cout<<all<<" ";
	if(all/10==0)
	{
		cout<<all;
	}
	else
	{
		while(all/10!=0)
		{
			int num2=all;
			int all1=1;
			while(num2)
			{
				int temp=num2%10;
				if(temp!=0)
				{
					all1*=temp;
				}
				num2/=10;
			}
			cout<<all1<<" ";
			all=all1;
		}
	}
}
	return 0;
}
