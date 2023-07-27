#include<iostream>
using namespace std;

class demo
{
	public:
	int id;
	string name;
	
	void getdata()
	{
		cout<<"enter the id"<<endl;
		cin>>id;
		cout<<"enter the name"<<endl;
		cin>>name;
	}
	void setdata()
	{
		cout<<"id is"<<id<<"name is"<<name<<endl;
	}
};



int main()
{
	demo obj;
	obj.getdata();
	obj.setdata();
	return 0;
}
