//oops swaping

#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int b=20;
	int c;
	cout<<"before swaping"<<endl;
	cout<<"a"\n<<a<<"b\n"<<b<<endl;
	
	a=b;
	b=c;
	c=a;
	
	cout<<"after swaping"<<endl;
	cout<<"\na"<<a<<"\nb"<<b<<endl;
	
	return 0;
}
