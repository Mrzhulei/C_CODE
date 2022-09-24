#include<iostream>
using namespace std;
int main()
{
	int a[4];
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<3;j++)
	{
		for(int y=0;y<4-j-1;y++)
		{
			if(a[y]<a[y+1])
			{
				int p=a[y];
				a[y]=a[y+1];
				a[y+1]=p;
			}
		}
	}
	for(int m=0;m<4;m++)
	{
		cout<<a[m]<<" ";
	}
	cout<<endl;
	return 0;
}
