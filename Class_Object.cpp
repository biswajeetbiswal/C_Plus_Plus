#include <iostream>
using namespace std;
class first
{

    int x;

public:
    void display()
    {
        cout << "Enter the value of x";
        cin >> x;
        cout << ++x;
    }
};
int main()
{
    first obj;
    obj.display();
    return 0;
}