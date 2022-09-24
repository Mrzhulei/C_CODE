#include<iostream>
using namespace std;
int main()
{
	int money,num;
	char ch;
	cin>>money>>ch>>num;
	if(money>=5000)
	{
		if(ch=='y'||num<=2000)
		{
			cout<<"Accept";
		}
		else
		{
			cout<<"Refuse";
		}
	}
	else
	{
		if(ch=='y'&&num<=2000)
		{
			cout<<"Accept";
		}
		else
		{
			cout<<"Refuse";
		}
	}
	return 0;
}
