//copy constructor

#include<iostream>
using namespace std;

class student
{
	int a;
	public:
	student(int x)
	{
	a=x;
	}
	void display()
	{
	cout<<"value"<<endl;
	}	
	
};

int main()
{
	student s1(20);
	student s2(s1);
	s1.display();
	s2.display();
	return 0;
}
