#include<iostream>
using namespace std;

class demo
{
	public:
	int name;
	int age;
	
	void details()
	{
	cout<<"enter the name"<<endl;
	cin>>name;
	cout<<"enter the age"<<endl;
	cin>>age;
	}
	void setdata()
	{
	cout<<"name is"<<name<<"age is"<<age<<endl;
	}
};


int main()
{
	demo obj;
	obj.details();
	obj.setdata();
	return 0;
}
