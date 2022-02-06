#include <conio.h>
#include <iostream>
using namespace std;
class Demo
{
    int a, b;

public:
    Demo(int a1, int b1) //paramaterized constructor(it take input arguments)
    {
        a = a1;
        b = b1;
    }
    void get()
    {
        cout << a << " + i" << b << endl;
    }
};
int main()
{
    Demo A(2, 4);        // implicit call
    Demo B = Demo(5, 2); // explicit call
    A.get();
    B.get();
    return 0;
}