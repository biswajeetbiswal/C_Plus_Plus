#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "x is :" << *x << "\ny is :" << *y;
}
int main()
{
    int x, y;
    cout << "Enter the value of x,y";
    cin >> x >> y;
    swap(&x, &y);
    cout << "\n x is:" << x << "\n y is:" << y;
    return 0;
}