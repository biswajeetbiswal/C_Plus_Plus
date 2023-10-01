#include <iostream>
using namespace std;
class A
{
    int x, y;

public:
    A(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void Add()
    {
        int sum = x + y;
        cout << "Addition of x and y is:" << sum;
    }
};
int main()
{
    A a(5, 6);
    a.Add();
    return 0;
}