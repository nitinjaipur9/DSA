#include <iostream>
#include <conio.h>
using namespace std;
class X
{
    int a, b;

public:
    X(void)   // default constructor(it dont took any parameter).....constructor dont have any return type
    {
        a = 10;
        b = 20;
    }
    void get()
    {
        cout << a << " + i " << b;
    }
};
int main()
{
    X A;
    A.get();
    return 0;
}