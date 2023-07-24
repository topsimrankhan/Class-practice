//scope resulation operator

#include<iostream>
using namespace std;

class demo
{
public:
int a,b;

void getdata();
void setdata();

};
void demo::getdata()
{
	cout<<"enter the value of a and b"<<endl;
	cin>>a>>b;
}
void demo::setdata()
{
	cout<<"a"<<"b"<<endl;
}


int main()
{
	demo kk;
	kk.getdata();
	kk.setdata();
	return 0;
}
