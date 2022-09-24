#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	if(num>=90)
	{
		cout<<'A'<<endl;
	}
	else if(num<90&&num>79)
	{
		cout<<'B'<<endl;
	}
	else if(num<80&&num>69)
	{
		cout<<'C'<<endl;
	}
	else if(num<70&&num>59)
	{
		cout<<'D'<<endl;
	}
	else
	{
		cout<<'E'<<endl;
	}
	return 0;
}
