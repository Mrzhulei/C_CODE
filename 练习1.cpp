#include<iostream>
using namespace std;
int main()
{
	char ch;
	int n,num,score;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>ch;
		if(ch=='r')
		{
			cin>>num;
		}
		switch(ch)
		{
			case 'r': score=score+num;break;
			case 'y': score=score+2;break;
			case 'g': score=score+3;break;
			case 'c': score=score+4;break;
			case 'b': score=score+5;break;
			case 'p': score=score+6;break;
			case 'B': score=score+7;break;
		}
	}
	cout<<score<<endl;
	return 0;
}
