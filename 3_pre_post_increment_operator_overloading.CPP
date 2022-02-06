#include <conio.h>
#include <iostream>
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
    Demo operator++()
    {
        Demo temp;
        temp.a = a++;
        temp.b = b++;
        return temp;
    }
    Demo operator++(int) //here (int) is just to differenciating both overloading function.
    {                    //(int) have no other uses
        Demo temp;
        temp.a = ++a;
        temp.b = ++b;
        return temp;
    }
};
int main()
{
    Demo a, b, c;
    a.set(4, 5);
    a.get();
    b = a++;
    c = ++a;
    b.get();
    c.get();
    return 0;
}