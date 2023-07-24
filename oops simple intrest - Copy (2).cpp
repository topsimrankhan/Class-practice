//oops simple intrest

#include<iostream>
using namespace std;

int main()
{
	float i,p,t,n;
	int r;
	
	cout<<"enter principal:";
	cin>>p;
	
	cout<<"enter numbar of year:";
	cin>>n;
	
	cout<<"enter rate:";
	cin>>r;
	
	i=(p*r*n)/100;
	cout<<"simple intrest"<<i<<endl;
	
	return 0;
}
