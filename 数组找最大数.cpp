#include<iostream>
using namespace std;
int main ()
{
	int max=0;
	int a[]={300,400,654,851,645,954}; 
	for(int i=0;i<6;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<max<<endl;
	return 0;
}
