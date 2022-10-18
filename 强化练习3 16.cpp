#include<iostream>
using namespace std;
int sushu(int a)
{
	int num=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			num++;
		}
	}
	if(num==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	int p=0;
	int a[32];
	cin>>n;
	int num2=n;
	if(sushu(n))
	{
		cout<<-1;
	}
	else if(n==1)
	{
		cout<<1;
	}
	else
	{
		do
		{
			for(int i=2;i<num2;i++)
			{
				if(num2%i==0) {a[p]=i;p++;
				num2=num2/i;
				break;}
			}
		}
		while(sushu(num2)!=1); 
		a[p]=num2;
		int num=0;
		for(int i=0;i<p;i++)
		{
			for(int j=i+1;j<=p;j++)
			{
				if(a[i]==a[j]) {num++;}
			}
		}
		if(num!=0)
		{
			cout<<0;
		}
		else
		{
			if((p+1)%2==0){cout<<1;}
			else{cout<<-1;}
		}
	}
	return 0;
	
	
	
	
	
	
	
	
}
