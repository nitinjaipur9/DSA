#include <conio.h>
#include <iostream>
using namespace std;
class Sum;
class Complex
{
    int a, b;

public:
    friend class Sum;
    void set(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void get()
    {
        cout << a << " + i" << b << endl;
    }
};
class Sum
{
public:
    int sum(Complex o1, Complex o2)
    {
        cout << o1.a + o2.a << " +i" << o1.b + o2.b;
    }
};
int main()
{
    Complex A, B;
    A.set(2, 4);
    B.set(8, 3);
    A.get();
    B.get();
    Sum X;
    X.sum(A, B);
    return 0;
}