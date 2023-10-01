#include <iostream>
using namespace std;
class A
{
    int x, y;
    static int z;

public:
    void display(int a, int b)
    {
        x = a;
        y = b;
    }
    void show()
    {
        cout << "Add is:" << x + y;
        cout << "\nZ is:" << ++z;
    }
};
int A::z;
int main()
{
    A a;
    a.display(5, 6);
    a.show();
    return 0;
}
