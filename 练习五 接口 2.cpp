#include<iostream>
using namespace std;
void PrintBlank(int num)
{
	for(int i=0;i<num;i++)
	{
		cout<<" ";
	}
}
void PrintCombine(int n)
{
	if(n==1)
	{
		cout<<1;
	 }
	 else if(n==2)
	 {
	 	cout<<1<<" "<<1;
	 }
	 else
	 {
	 	int num=1;
	 	for(int i=0;i<=n-1;i++)
	 	{
	 		if(i==0)
	 		{
	 			cout<<1;
			 }
			 else
			 {
			 	int num1=n-1;
			 	for(int j=1;j<=i;j++)
			 	{
			 		num*=num1;
			 		num1--;
				 }
				 int num2=1;
				 for(int j=i;j>=1;j--)
				 {
				 	num2*=j;
				 }
				 num=num/num2;
				 cout<<" "<<num;
				 num=1;
			 }
		 }
	 }
}
