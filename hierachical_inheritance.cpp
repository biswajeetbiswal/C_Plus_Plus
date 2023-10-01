#include <iostream>
using namespace std;
class A
{
public:
    void first()
    {
        cout << "Parent class";
    }
};
class B : public A
{
public:
    void second()
    {
        first();
        cout << "\nFirst child class\n";
    }
};
class C : public A
{
public:
    void third()
    {
        first();
        cout << "\nsecond child class";
    }
};
int main()
{
    B b;
    b.second();
    C c;
    c.third();
    return 0;
}