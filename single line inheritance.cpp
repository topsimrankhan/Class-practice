//single line inheritance

#include<iostream>
using namespace std;

class ik
{
	public:
	void a()
	{
		cout<<"hello i m imran"<<endl;
	}
};
class ri:public ik
{
	public:
	void b()
	{
		cout<<"hello i m khan"<<endl;
	}
};

int main()
{
ri ss;
ss.a();
ss.b();
	
	
	return 0;
}
