#include <iostream>
using namespace std;
class A
{
protected:
    int x;

public:
    void parent1(int a)
    {
        x = a;
    }
};
class B
{
protected:
    int y;

public:
    void parent1(int b)
    {
        y = b;
    }
};
class C : public A, public B
{
public:
    void child()
    {
        int sum;
        sum = x + y;
        cout << "Sum is:" << sum;
    }
};
int main()
{
    C c;
    c.A::parent1(5);
    c.B::parent1(6);
    c.child();
    return 0;
}