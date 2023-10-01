#include <iostream>
using namespace std;
class A
{
public:
    void p1(int a)
    {
        cout << "A is:" << a;
    }
};
class B : public A
{
protected:
    int y;

public:
    void p2(int b)
    {
        y = b;
    }
};
class C : public A
{
protected:
    int z;

public:
    void p3(int c)
    {
        z = c;
    }
};
class D : public B, public C
{
public:
    void p4()
    {
        cout << "multiplication is:" << y * z;
    }
};
int main()
{
    D d;
    B b;
    b.p1(5);
    d.p2(6);
    d.p3(8);
    d.p4();
    return 0;
}