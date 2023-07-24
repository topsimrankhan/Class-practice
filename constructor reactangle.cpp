//constructor reactangle
#include<iostream>
using namespace std;

class rectangle
{
	public:
	int length;
	int width;
	int area;
	
	void getinfo();
{
	cout<<"enter the value of length"<<endl;
	cin>>length;
	cout<<"enter the value of width"<<endl;
	cin>>width;
	}	
	
	void setdata();
	{
		cout<<"area of reactangle is"<<length*width<<endl;
	}
};


int main()
{
	rectangle obj();
	obj.getdata();
	obj.setdata();
	
	return 0;
}
