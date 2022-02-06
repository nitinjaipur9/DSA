#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
    int a, b;
    friend Complex sum(Complex o1, Complex o2); //declearation of friend function
public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void get()
    {
        cout << a << " + i" << b << endl;
    }
};

Complex sum(Complex o1, Complex o2)
{
    Complex o3;
    o3.set((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, s;
    c1.set(1, 3);
    c1.get();
    c2.set(5, 2);
    c2.get();
    s = sum(c1, c2);
    s.get();
    return 0;
}