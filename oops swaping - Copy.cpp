//oops

#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int b=20;
	
	cout<<"before swaping "<<endl;
	cout<<"a"<<a<<"b"<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"after swaping "<<endl;
	cout<<"a"<<a<<"b"<<b<<endl;
	

	
	return 0;
}
