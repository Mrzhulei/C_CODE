#include<iostream>
using namespace std;
int main()
{
	int s;
	cin>>s;
	for(int i=s;1;i++)
	{
		int num1=0,num2=0;
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				num1+=j;
			}
		}
		for(int j=1;j<num1;j++)
		{
			if(num1%j==0)
			{
				num2+=j;
			}
		}
		if(num2==i)
		{
			cout<<i<<" "<<num1;
			break;
		}
	}
	return 0;
}
