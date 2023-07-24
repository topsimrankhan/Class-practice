/*a class called circle with attribute radius.
implement a ,method to calculate the are of the circle*/

#include<iostream>
using namespace std;

class math
{
public:
int radius1,radius2;

void getdata()
{
	cout<<"enter the value of radius"<<endl;
	cin>>radius1;
	cout<<"enter the value of radius"<<endl;
	cin>>radius2;
	
	}
	void setdata()
	{
		cout<<"area of circle is"<<3.14*radius1*radius2<<endl;
		}	
};

int main()
{
	math obj;
	obj.getdata();
	obj.setdata();
	return 0;
}
