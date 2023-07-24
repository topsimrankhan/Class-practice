//oops class example

#include<iostream>
using namespace std;

class  demo     //class name
{
	public:      //accesifier
	
	void hello()
	{
		cout<<"hello i m class"<<endl;
	}
	
};
int main()
{
demo obj;
obj.hello();
return 0;
}
