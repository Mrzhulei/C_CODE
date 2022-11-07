bool prime(int a)  
{   
    int sum=0;
	for(int i=1;i<=a;i++) 
	{   
	    if(a==1) break;
		else if(a%i==0) sum+=i;
		else continue;
	}
	if(sum==(a+1))  return true;
	else  return false;
}      
bool plalindrome(int a)
{
	int sum=0;
	for(int i=a;i>0;i/=10)
	{
		sum=sum*10+i%10;
	}
	if(sum==a) return 1;
	else return 0;
}
cout<<"wadawd"<<endl;
