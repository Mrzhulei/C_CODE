#include<iostream>
using namespace std;
int main()
{
	int n,iB,iE;
    cin>>n>>iB>>iE;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	int b[n];
	int count=iB;
	for(int i=iB+1;i<=iE;i++)
	{
		if(a[i]<=a[iB])
		{
			b[count]=a[i];
			count++;
		}
	}
	b[count]=a[iB];
	count++;
	for(int i=iB+1;i<=iE;i++)
	{
		if(a[i]>a[iB])
		{
			b[count]=a[i];
			count++;
		}
	}
	for(int i=0;i<iB;i++)
	{
		b[i]=a[i];
	}
	for(int i=iE+1;i<n;i++)
	{
		b[i]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<b[i];
		}
		else
		{
			cout<<" "<<b[i];
		}
	}
}

