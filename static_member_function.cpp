#include <iostream>
using namespace std;
class A
{
    int x;
    static int y;

public:
    void show(int a)
    {
        x = a;
        y++;
    }
    void display()
    {
        cout << "X =" << x << "\tY =" << y;
    }
    static void abc()
    {
        cout << "\ty =" << y;
    }
};
int A::y;
int main()
{
    A aa;
    aa.show(5);
    aa.display();
    A::abc();
    return 0;
}