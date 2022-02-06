#include <conio.h>
#include <iostream>
using namespace std;

// Ambiguity means having public function of same name in base classes
// For resolve this problem we clearify that which function should be used

class B1
{
public:
    void greet()
    {
        cout << "Hello!" << endl;
    }
};

class B2
{
public:
    void greet()
    {
        cout << "Hi" << endl;
    }
};

class A : public B1, public B2
{
public:
    void greet()
    {
        B1 ::greet(); // Resolving ambiguity
    }
};

int main()
{
    A a1;
    B1 b1;
    B2 b2;
    b1.greet();
    b2.greet();
    a1.greet();
    return 0;
}