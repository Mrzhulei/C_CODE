#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main()
{
	int a=0;
	srand((unsigned int)time(NULL));
	int num= rand() % 100+1;
	while(1)
	{
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
			cout<<"恭喜猜对"<<endl;
			break; 
		}
	}
	
	
	
	
	
	
	
	
	return 0;
 } 
