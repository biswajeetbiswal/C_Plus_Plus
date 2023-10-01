#include <iostream>
using namespace std;
class area
{
public:
    area(int x)
    {
        int sq = x * x;
        cout << "Area of squre is:" << sq;
    }
    area(int a, int b)
    {
        int re = a * b;
        cout << "\nArea of rectangle is:" << re;
    }
};
int main()
{
    area obj(5);
    area obj1(4, 3);
    return 0;
}