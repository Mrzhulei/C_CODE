#include<iostream>
using namespace std;
int main()
{
	int n,y,t;
	cin>>n,y;
	switch(y)
	{
		case 1: t=31;break;
		case 3: t=31;break;
		case 5: t=31;break;
		case 7: t=31;break;
		case 8: t=31;break;
		case 10: t=31;break;
		case 12:t=31;break;
		case 4: t=30;break;
		case 6: t=30;break;
		case 9: t=30;break;
		case 11: t=30;break;
		case 2: if((n%4==0&&n%100!=0)||n%400==0)
		{
			t=29;
		}
		else
		{
			t=28;
		}
		break;
	}
	cout<<t<<endl;
	return 0;
}
