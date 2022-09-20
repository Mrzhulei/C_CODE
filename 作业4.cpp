#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a,b,c,d,e,f,i,o,p;
	char z,x,m,v;
	cin>>a>>z>>b>>x>>c>>d>>m>>e>>v>>f;
	if(f>=c){
		p=f-c;
		e=e;
	}
	else{
		p=f+60-c;
		e=e-1;
	}
	if(e>=b){
		o=e-b;
		d=d;
	}
	else
	{
		o=e+60-b;
		d=d-1;
	}
	i=d-a;
	cout<<i;
	cout<<":";
	cout<<setfill('0')<<setw(2)<<o;
	cout<<":";
	cout<<setfill('0')<<setw(2)<<p; 
	return 0;
}
