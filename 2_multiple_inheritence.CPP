#include <conio.h>
#include <iostream>
using namespace std;
class B1 // Base class B1
{
    int a;

public:
    void val_a(int x)
    {
        a = x;
    }
    void show_a()
    {
        cout << a;
    }
};

class B2 // Base class B2
{
    int b;

public:
    void val_b(int y)
    {
        b = y;
    }
    void show_b()
    {
        cout << b;
    }
};

class D : public B1, public B2 // Derived class D
{
};

int main()
{
    D obj;
    obj.val_a(5);
    obj.val_b(7);
    obj.show_a();
    cout << endl;
    obj.show_b();
    return 0;
}