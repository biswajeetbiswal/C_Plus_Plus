#include <iostream>
using namespace std;
class A
{

public:
    void display(int s, int y)
    {
        cout << "\nX is:" << s << "\nY is:" << y;
    }
};
class B : public A
{
public:
    void show(int a)
    {
        cout << "\nA is:" << a;
    }
};
int main()
{
    B b;
    b.show(5);
    b.display(4, 6);
    return 0;
}