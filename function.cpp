#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int x = 5;
    int y = 8;
    int n = add(5, 8);
    cout << "add is :" << n;
    return 0;
}