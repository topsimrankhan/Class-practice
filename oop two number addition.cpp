#include<iostream>
using namespace std;

class math
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
		cout<<"addition of a and b is"<<a+b<<endl;
		}	
};

int main()
{
	math add;
	add.getdata();
	add.setdata();
	return 0;
	}
