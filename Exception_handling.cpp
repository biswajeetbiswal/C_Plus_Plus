#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the value of a,b:";
    cin >> a >> b;
    try
    {
        if (b != 0)
        {
            c = a / b;
            cout << "\nThe division result is:" << c;
        }
        else
        {
            throw(b);
        }
    }
    catch (int b)
    {
        cout << "\nDivided by:" << b;
    }
    return 0;
}