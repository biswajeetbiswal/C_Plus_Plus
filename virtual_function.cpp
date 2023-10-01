#include <iostream>
using namespace std;
class A
{
public:
    virtual void display()
    {
        cout << "print base class";
    }
    void show()
    {
        cout << "\nshow base class";
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "\nprint derived class";
    }
    void show()
    {
        cout << "\nshow derived classs";
    }
};
int main()
{
    A *ptr;
    B b;
    A a;
    ptr = &b;
    ptr->display();
    (*ptr).show();
    return 0;
}