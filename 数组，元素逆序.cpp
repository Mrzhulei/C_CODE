#include<iostream>
using namespace std;
int main()
{
	int b;
	int a[4]={0,1,2,3};
	b=a[3];
	for(int i=3;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=b;
	for(int j=0;j<=3;j++)
	{
		cout<<a[j];
	}
	return 0;
}

