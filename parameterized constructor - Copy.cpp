//parameterized constructor

#include<iostream>
using namespace std;

class demo
{
	private:
	int x,y;
	public:
	
	demo(int a, int b)

	{
		x=a;    //10
		y=b;    //20
		
	}
	void display()
	{
		cout<<x<<y<<endl;
	}
};

int main()
{
demo obj(10,20);
obj.display();	
	return 0;
}
