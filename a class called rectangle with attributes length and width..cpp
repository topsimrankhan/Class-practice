/*a class called rectangle with attributes length and width.
implement a method to calculate a method to calculate the area of rectangle*/

#include<iostream>
using namespace std;

class math
{
	public:
		int length;
		int width;
		
		void getdata()
		{
			cout<<"enter the value of length"<<endl;
			cin>>length;
			cout<<"enter the value of width"<<endl;
			cin>>width;
		}
		
		void setdata()
		{
			cout<<"area of rectangle is"<<length*width<<endl;
			
		}
};



int main()
{
	math obj;
	obj.getdata();
	obj.setdata();
	return 0;
}
