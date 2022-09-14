#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	for(int num=rand()%100+1;;)
	{
		int a=0;
		cin>>a;
		if(a>num)
		{
			cout<<"猜值过大"<<endl;
		}
		else if(a<num)
		{
			cout<<"猜值过小"<<endl;
		}
		else
		{
			cout<<"猜值正确"<<endl;
			break;
		}
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
 } 
