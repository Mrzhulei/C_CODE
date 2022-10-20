#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,temp1,temp2;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int month,year,day;
		cin>> year>>month>>day;
		if(month==1||month==2)
		{
			year--;
			if(month==1)
			{
				month=13;
			}
			else if (month==2)
			{
				month=14;
			}
		}
		for(int i=0;i<4;i++)
		{
			int temp;
			temp=year%10;
			if(i<2)
			{
				temp1+=temp*pow(10,i);
			}
			else
			{
				temp2+=temp*pow(10,(i-2));
			}
		}
	    int w1;
	    w1=temp1+temp1/4+temp2/4-2*temp2+26*(month+1)+day-1;
	    cout<<w1;
	}

 } 
