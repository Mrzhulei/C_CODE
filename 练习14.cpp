#include<iostream>
using namespace std;
int main()
{
	double a,num1,num2;
	cin>>a;
	num1=27+23+a/3.0;
	num2=a/1.2;
	if(num1<num2)
	{
		cout<<"Bike"<<endl;
	}
	else if(num1>num2)
	{
		cout<<"Walk"<<endl;
	}
	else
	{
		cout<<"All"<<endl;
	}
	return 0;
 } 
