/*a class called person with attrubute name and age.
implement a method to display the details of the person*/

#include<iostream>
using namespace std;

class person
{
	public:
		int name;
		int age;		
 
 void getdata()
 {
 	cout<<"enter the name"<<endl;
 	cin>>name;
 	cout<<"enter the age"<<endl;
 	cin>>age;
 
}
void setdat()
{
	cout<<"name is"<<name<<"age is"<<age<<endl;
		}		
};
int main()
{
	person ik;
	ik.getdata();
	ik.setdat();
	return 0;
}
