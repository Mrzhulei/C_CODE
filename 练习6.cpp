#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,d=0,all=0;
	int n;
	char ch;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>ch;
		if(ch<=90&&ch>=65)
		{
			a++;
		}
		else if(ch<=122&&ch>=97)
		{
			b++;
		}
		else if(ch<=57&&ch>=48)
		{
			c++;
			all=all+ch-48;
			
		}
		else
		{
			d++;
		}
	} 
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
	if(c>0)
	{
		cout<<all<<endl;
	}
	else;
	return 0;
}
