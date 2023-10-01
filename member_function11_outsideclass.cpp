#include <iostream>
using namespace std;
class A
{
public:
    void display(int a, int b);
};
void A::display(int a, int b)
{
    cout << "Sum is:" << a + b;
}
int main()
{
    A a;
    a.display(5, 6);
    return 0;
}