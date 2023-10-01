#include <iostream>
using namespace std;
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "x is:" << x << "\ny is:" << y;
}
int main()
{
    int a, b;
    cout << "Enter the value of a,b:";
    cin >> a >> b;
    swap(a, b);
    cout << "\na :" << a << "\nb :" << b;
    return 0;
}