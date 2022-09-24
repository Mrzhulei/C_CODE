#include<iostream>
using namespace std;
int main()
{
	int q,e,a,d,z,c;
	char w,s,x;
	cin>>q>>w>>e;
	cin>>a>>s>>d;
	cin>>z>>x>>c;
	int num1,num2,num3;
	if(w=='y')
	{
		num1=num1+q/5000*100+20;
	}
	else
	{
		num1=num1+q/5000*100;
	}
	if(e<=2000)
	{
		num1=num1+100;
	}
	else if(e<=4000)
	{
		if((e-2000)%200==0)
		{
			num1=num1+100-(e-2000)/200*10;
		}
		else
		{
			num1=num1+100-(e-2000)/200*10-10;
		}
	}
	else
	{
		num1=num1;
	}
		if(s=='y')
	{
		num2=num2+a/5000*100+20;
	}
	else
	{
		num2=num2+a/5000*100;
	}
	if(d<=2000)
	{
		num2=num2+100;
	}
	else if(d<=4000)
	{
		if((d-2000)%200==0)
		{
			num2=num2+100-(d-2000)/200*10;
		}
		else
		{
			num2=num2+100-(d-2000)/200*10-10;
		}
	}
	else
	{
		num2=num2;
	}
		if(x=='y')
	{
		num3=num3+z/5000*100+20;
	}
	else
	{
		num3=num3+z/5000*100;
	}
	if(c<=2000)
	{
		num3=num3+100;
	}
	else if(c<=4000)
	{
		if((c-2000)%200==0)
		{
			num3=num3+100-(c-2000)/200*10;
		}
		else
		{
			num3=num3+100-(c-2000)/200*10-10;
		}
	}
	else
	{
		num3=num3;
	}
	if(num1>num2&&num1>num3)
	{
		cout<<"A"<<endl;
	}
	else if(num2>num1&&num2>num3)
	{
		cout<<"B"<<endl;
	}
	else if(num3>num1&&num3>num2)
	{
		cout<<"C"<<endl;
	}
	else if(num1=num2=num3)
	{
		cout<<"A";
	}
	else;
	return 0;
}
