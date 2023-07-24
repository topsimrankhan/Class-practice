#include<iostream>
using namespace std;

class pp
{
	public:
	int a,b;
	
	void getdata()
	{
		cout<<"enter the value of a"<<endl;
		cin>>a;
		cout<<"enter the value of b"<<endl;
		cin>>b;
	}
	void setdata()
	{
		cout<<"before swaping"<<a<<b<<endl;
		cout<<"after swaping"<<b<<a<<endl;
		
	}
};

int main()
{
	pp oo;
	oo.getdata();
	oo.setdata();
	return 0;
}

