#include <iostream>
#include <conio.h>
using namespace std;
class Demo
{
    int a, b;

public:
    void set(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void get()
    {
        cout << a << "+" << b << "i" << endl;
    }
    Demo operator-() //uniry operator overloading
    {
        Demo temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
};
int main()
{
    Demo a, b;
    a.set(3, 4);
    a.get();
    b = -a;
    b.get();
    return 0;
}