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
        cout << "Area of rectangle:" << x * y;
        cout << "\nZ is:" << ++z;
    }
    static void Add()
    { // we  cannot access the global varible
        // here we only access the static varible
        //  cout<<"\nX and y:"<<x;
        cout << "\n"
             << z;
    }
};
int A::z;
int main()
{
    A a;
    a.display(7, 8);
    a.show();
    a.Add();
    return 0;
}
