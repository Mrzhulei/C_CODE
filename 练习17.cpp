#include<iostream>
using namespace std;
int main()
{
	int n1,u1,d1;
	int n2,u2,d2;
	int n3,u3,d3;
	cin>>n1>>u1>>d1;
	cin>>n2>>u2>>d2;
	cin>>n3>>u3>>d3;
	int t1=0;
	int t2=0;
	int t3=0;
	for(int m=0;m<=n1;)
	{
		m=m+u1;
		t1++;
		if(m>=n1)
		{
			break;
		}
		m=m-d1;
		t1++;
	}
	cout<<t1<<endl;
		for(int m=0;m<=n2;)
	{
		m=m+u2;
		t2++;
		if(m>=n2)
		{
			break;
		}
		m=m-d2;
		t2++;
	}
	cout<<t2<<endl;
		for(int m=0;m<=n3;)
	{
		m=m+u3;
		t3++;
		if(m>=n3)
		{
			break;
		}
		m=m-d3;
		t3++;
	}
	cout<<t3<<endl;
	return 0;
}
