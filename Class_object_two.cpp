#include <iostream>
using namespace std;
class Add
{
public:
    int display()
    {
        int x, y;
        cout << "Enter the value of x and y:";
        cin >> x >> y;
        int sum = x + y;
        return sum;
    }
};
int main()
{
    Add obj;
    int s = obj.display();
    cout << "After sum : " << s;
    return 0;
}