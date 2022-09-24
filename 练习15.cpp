#include<iostream>
using namespace std;
int main()
{
	int t,s,z,money;
	cin>>t>>s;
	if(s<250)
	{
		z=0;
	}
	else if(s<500)
	{
		z=2;
	}
	else if(s<1000)
	{
		z=5;
	}
	else if(s<2000)
	{
		z=8;
	}
	else if(s<3000)
	{
		z=10;
	}
	else
	{
		z=15;
	}
	money=t*s*(1-z*0.01);
	cout<<money<<endl;
	return 0;
	
}
