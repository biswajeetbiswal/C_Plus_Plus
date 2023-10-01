#include <iostream>
using namespace std;
class A
{
    int x, y;
    static int z;

public:
    void show(int a, int b)
    {
        x = a;
        y = b;
        z++;
    }
    void display()
    {
        cout << "\tX =" << x << "\tY =" << y << "\tZ =" << z;
    }
};
int A::z;
int main()
{
    A aa, bb;
    aa.show(5, 6);
    bb.show(10, 20);
    aa.display();
    bb.display();
    return 0;
}