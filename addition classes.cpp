//addition in classes

#include<iostream>
using namespace std;

class demo
{
public:
int a,b;

void a()
{
	cout>>"enter the value of a"<<endl;
	cin>>a;
	cout<<"enter the value of b"<<endl;
	cin>>b;
	}	
	void b()
	{
		cout<<"addition of a and b is "<<a+b<<endl;
	}

};



int main()
{
	demo obj;
	obj.a();
	obj.b();
	return 0;
}
