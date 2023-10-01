#include <iostream>
using namespace std;
int display(int x)
{
    try
    {
        if (x > 0)
        {
            return x * display(x - 1);
        }
       /* else
        {
            throw 0;
        }*/
    }
    catch (int x)
    {
        cout << "X value is '0'";
    }
}
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int s = display(x);
    cout << s;
    return 0;
}
