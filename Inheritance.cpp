#include <iostream>
#include <cmath>
using namespace std;
class shape
{
protected:
    int area;
    int peri;
};
class rectangle : public shape
{
public:
    void cal1(int a, int b)
    {
        area = a * b;
        peri = 2 * (a + b);
        cout << "Area of rectangle:" << area << endl;
        cout << "Perimeter of rectangle:" << peri << endl;
    }
};
class square : public shape
{
public:
    void cal2(int a)
    {
        area = a * a;
        peri = 4 * a;
        cout << "Area of square:" << area << endl;
        cout << "Perimeter of square:" << peri << endl;
    }
};
class triangle : public shape
{
public:
    void cal3(int a, int b, int c)
    {
        int s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        peri = a + b + c;
        cout << "Area of triangle:" << area << endl;
        cout << "Perimeter of triangle:" << peri;
    }
};
int main()
{
    rectangle r;
    r.cal1(5, 3);
    square s;
    s.cal2(4);
    triangle t;
    t.cal3(3, 4, 5);
    return 0;
}