#include <iostream>
using namespace std;
int count=0;
class A
{
public:
    
    A()
    {
        count++;
        cout << "\nObject created:" << count;
    }
    ~A()
    {
        count--;
        cout << "\nObject destroyed:" << count;
    }
};
int main()
{
    A a, b, c, d;
   /* {
      A  e;
    }*/
    return 0;
}