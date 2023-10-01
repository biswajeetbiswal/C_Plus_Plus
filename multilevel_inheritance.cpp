#include <iostream>
using namespace std;
class A
{
public:
    void area(int a)
    {
        int sq = a * a;
        cout << "Area of square is: " << sq;
    }
};
class B : public A
{
public:
    void second(int s, int a)
    {
        // float d = (float)s;
        // area(a);
        float peri = 2 * 3.14 * s;
        cout << "\nPerimeter of the circle is:" << peri;
    }
};
class C : public B
{
public:
    void display(int x, int y, int s, int a)
    {
        second(s, a);
        int are = x * y;
        cout << "\nArea of the rectangle is:" << are;
    }
};
int main()
{
    int x = 5, y = 6, s = 7, a = 2;
    C c;
    c.display(x, y, s, a);
    c.area(5);
    return 0;
}