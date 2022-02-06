#include <conio.h>
#include <iostream>
using namespace std;
class Complex
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
    Complex operator+(Complex C) //overloading binary + operator
    {
        Complex temp;
        temp.a = a + C.a;
        temp.b = b + C.b;
        return temp;
    }
};
int main()
{
    Complex x, y, z;
    x.set(2, 3);
    y.set(5, 6);
    x.get();
    y.get();
    z = x + y; //using overloaded defination
    z.get();
    return 0;
}