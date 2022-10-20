#include<iostream>
using namespace std;
int main()
{
	int n,g,r;
	cin>>n>>g>>r;
	int wayTime[n+1];
	for(int i=0;i<n+1;i++)
	{
		cin>>wayTime[i];
	 } 
	 int number;
	 cin>>number;
	 int startTime[number];
	 for(int i=0;i<number;i++)
	 {
	 	cin>>startTime[i];
	 }
	 for(int i=0;i<number;i++)
	 {
	 	int allTime=0;
	 	allTime+=startTime[i];
	 	for(int j=0;j<n;j++)
	 	{
	 		allTime+=wayTime[j];
	 		int temp1=allTime/(r+g);
	 		int temp2=allTime-temp1*(r+g);
	 		if(temp2<g) {}
	 		else {allTime=allTime+r+g-temp2;}
		 }
		 allTime+=wayTime[n];
		 cout<<allTime<<" ";
	 }
	 return 0;
}
