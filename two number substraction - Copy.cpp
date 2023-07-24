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
         	cout<<"substraction of a and b is"<<a-b<<endl;
         }
};



int main()
{
math sub;
sub.getdata();
sub.setdata();	
	return 0;
}
