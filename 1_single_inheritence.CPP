#include <conio.h>
#include <iostream>
using namespace std;
class Base //Base class
{
public:
    int id;
    Base() {}
    Base(int a1)
    {
        id = a1;
        cout << "Base class run" << endl;
    }
    int getid()
    {
        return id;
    }
};
class Der : public Base //Derived class
{
public:
    Der()
    {
        cout << "Der class run" << endl;
    }
    Der(int b1)
    {
        id = b1;
        cout << "Der class runs" << endl;
    }
};
int main()
{
    Base A1(1);
    Der B1;
    Der B2(2);
    return 0;
}