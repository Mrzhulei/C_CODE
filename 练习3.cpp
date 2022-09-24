#include<iostream>
using namespace std;
int main()
{
	int num,a,b,c;
	cin>>num;
	a=num%3;
	b=num%5;
	c=num%7;
	if(a==0)
	{
		if(b==0&&c==0)
		{
			cout<<"It's divisible by 3,5,7"<<endl;
		}
		else if(b==0&&c!=0)
		{
			cout<<"It's divisible by 3,5"<<endl;
		}
		else if(b!=0&&c==0)
		{
			cout<<"It's divisible by 3,7"<<endl;
		}
		else
		{
			cout<<"It's divisible by 3"<<endl;
		}	
	}
	else
	{
		if(b==0&&c==0)
		{
			cout<<"It's divisible by 5,7"<<endl;
		}
		else if(b==0&&c!=0)
		{
			cout<<"It's divisible by 5"<<endl;
		}
		else if(b!=0&&c==0)
		{
			cout<<"It's divisible by 7"<<endl;
		}
		else
		{
			cout<<"null"<<endl;
		}	
	}
	return 0;
 } 
