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
			cout<<"��ֵ����"<<endl;
		}
		else if(a<num)
		{
			cout<<"��ֵ��С"<<endl;
		}
		else
		{
			cout<<"��ֵ��ȷ"<<endl;
			break;
		}
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
 } 
