#include <conio.h>
#include <iostream>
using namespace std;
class Demo
{
    int a;

public:
    Demo() {}    //default constructor
    Demo(int a1) //parameterized constructor
    {
        a = a1;
        cout << "Paramatrized constructor runs" << endl;
    }
    Demo(Demo &obj) //Copy constructor
    {
        a = obj.a;
        cout << "Copy constructor runs" << endl;
    }
    void get()
    {
        cout << "Number is " << a << endl;
    }
};
int main()
{
    Demo A(5);
    A.get();
    Demo B;
    B = A;
    B.get();
    B = A;
    Demo C(A);
    C.get();
    return 0;
}