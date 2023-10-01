#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y;
}
int add(int x, int y, int z)
{
    return x + y + z;
}
int main()
{
    int x, y, z;
    cout << "Enter the value of x,y and z";
    cin >> x >> y >> z;
    int s = add(x, y);
    int d = add(x, y, z);
    cout << "\nAfter add:" << s;
    cout << "\nAfter second add:" << d;
    return 0;
}