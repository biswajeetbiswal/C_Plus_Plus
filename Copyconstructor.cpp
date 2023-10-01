#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A()
    {
        a=10;
    }
    A(A&z)
    {
        a=z.a;
    }
    void display()
    {
        cout<<"value of a ="<<a;
    }
};
int main()
{
    A aa;
    aa.display();
    A bb(aa);
    bb.display();
    return 0;
}