#include <iostream>
using namespace std;
class item
{
public:
    int number, cost;
    void putdata();
    void getdata(int, int);
};
void item::putdata()
{
    cout << "Number :" << number;
    cout << "\nCost is :" << cost;
}
void item::getdata(int a, int y)
{
    number = a;
    cost = y;
}
int main()
{
    item x;
    x.getdata(5, 395);
    x.putdata();
    return 0;
}