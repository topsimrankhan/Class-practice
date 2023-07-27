// name and sallery 

#include<iostream>
using namespace std;

class demo
{
public:
int salary;
string name;

void getdata()
{
	cout<<"enter the salary"<<endl;
	cin>>salary;
	cout<<"enter the name"<<endl;
	cin>>name;
	}	
	void setdata()
	{
		cout<<"salary is"<<salary<<"name is"<<name<<endl;
	}
};


int main()
{
	demo obj;
	obj.getdata();
	obj.setdata();
	
	return 0;
}
