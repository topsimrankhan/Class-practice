//oop input output
#include<iostream>
using namespace std;
 class id
 {
 public:
 	
 int obj;
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
	obj ik;
	ik.getdata();
	ik.setdata()	
	return 0;
}
