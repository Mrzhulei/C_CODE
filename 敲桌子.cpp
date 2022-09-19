#include<iostream>
using namespace std;
int main ()
{
	for(int num=1;num<=100;num++)
	{
		if(num%10==7||num/10==7||num%7==0)
		{
			cout<<"ÇÃ×À×Ó"<<endl;
		 } 
		 else
		 {
		 	cout<<num<<endl;
		 }
	}
	return 0;
 } 
