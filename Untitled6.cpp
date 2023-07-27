//addition in classes

#include<iostream>
using namespace std;

class demo
{
public:
int a,b;

void a1()
{
	cout<<"enter the value of a"<<endl;
	cin>>a;
	cout<<"enter the value of b"<<endl;
	cin>>b;
	}	
	void b1()
	{
		cout<<"addition of a and b is "<<a+b<<endl;
	}

};



int main()
{
	demo obj;
	obj.a1();
	obj.b1();
	return 0;
}
