#include<iostream>
using namespace std;

class kk
{
	public:
		
	int a,b;
		
	void getdata();
	void setdata();
	
};

void kk::getdata()
{
	cout<<"enter the calue of a"<<endl;
	cin>>a;
	cout<<"enter the value of b"<<endl;
	cin>>b;
}

void kk::setdata()
{
	cout<<"addition of a and b is"<<a+b<<endl;
}


int main()
{
	kk obj;
	obj.getdata();
	obj.setdata();
	return 0;
}
