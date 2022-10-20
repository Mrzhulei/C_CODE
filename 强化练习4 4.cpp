#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int L,v,l,r,num=0;
		cin>>L>>v>>l>>r;
		for(int j=1;j<=L;j++)
		{
			if(j%v==0)
			{
				if(j<l||j>r)
				{
					num++;
				}
			}
		}
		cout<<num<<endl;;
	}
	return 0;
}
