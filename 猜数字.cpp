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
			cout<<"��ֵ����"<<endl; 
		}
		else if(a<num)
		{
			cout<<"��ֵ��С"<<endl; 
		}
		else
		{
			cout<<"��ϲ�¶�"<<endl;
			break; 
		}
	}
	
	
	
	
	
	
	
	
	return 0;
 } 
