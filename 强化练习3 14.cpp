#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,n,i=0;
	cin>>a>>b>>n;
	cout<<a/b<<".";
	do
	{
		a=a%b*10;
		cout<<a/b;
		i++;
	}while(i<n);
	return 0;
}
