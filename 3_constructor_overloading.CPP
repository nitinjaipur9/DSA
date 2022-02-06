#include <iostream>
#include <conio.h>
using namespace std;
class Demo
{
    int a, b, c;

public:
    Demo(int a1, int b1 = 0) //constructor 1 with default argument
    {
        a = a1;
        b = b1;
        cout << "Constructor 1 used" << endl;
    }
    Demo(int a1, int b1, int c1)
    { //constructor 2
        a = a1;
        b = b1;
        c = c1;
        cout << "Constructor 2 used" << endl;
    }
    void get()
    {
        cout << "A: " << a << endl;
        cout << "B: " << b << endl;
        cout << "C: " << c << endl;
        cout << endl;
    }
};
int main()
{
    Demo A(3);
    A.get();
    Demo B(2, 3);
    B.get();
    Demo C(1, 2, 3);
    C.get();
    return 0;
}