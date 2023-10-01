#include <iostream>
using namespace std;
class cons
{
public:
    cons()
    {
        cout << "It is a constructor\n";
    }
    cons(int x)
    {
        cout << "The value of x is:" << x;
    }
};
int main()
{
    int s = 5;
    cons obj;
    cons obj1(s);
    return 0;
}