#include<iostream>
using namespace std;
int main()
{
	int q,w,e,a,s,d,z,x,c;
	cin>>q>>w>>e;
	cin>>a>>s>>d;
	cin>>z>>x>>c;
	int num1=q*365+w*30+e;
	int num2=a*365+s*30+d;
	int num3=z*365+x*30+c;
	if(num1>num2)
	{
		if(num2>num3)
		{
			cout<<"CBA"<<endl; 
		}
		else
		{
			if(num1>num3)
			{
				cout<<"BCA"<<endl;
			}
			else
			{
				cout<<"BAC"<<endl;
			}
		}
	} else{
	
		{
			if(num1>num3)
			{
				cout<<"CAB"<<endl;
			}
			else
			{
				if(num3>num2)
				{
					cout<<"ABC"<<endl;
				}
				else
				{
					cout<<"ACB"<<endl;
				}
			}
		}
}
	return 0;
 } 
