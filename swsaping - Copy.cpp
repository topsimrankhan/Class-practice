#include<iostream>
using namespace std;

class math
{
	public:
		int a,b;
		void getdeta()
		{
			cout<<"enter the value of a"<<endl;
			cin>>a;
			cout<<"enter the value of b"<<endl;
			cin>>b;
		}
		void setdata()
		{
		cout<<"before swapping"<<a<<b<<endl;
		cout<<"after swapping"<<b<<a<<endl;
			
		}
};
 
int main()
{
math obj;
obj.getdeta();
obj.setdata();
	
	
	
	
	return 0;
}
