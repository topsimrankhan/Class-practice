#include<iostream>
using namespace std;

class kk
{
public:
void a()
{
    cout<<"hello"<<endl;
}

};
class aa:public kk
{
    public:
    void b()
    {
        cout<<"byyy"<<endl;
    }
};
int main()
{
aa obj;
obj.a();
obj.b();

return 0;
}