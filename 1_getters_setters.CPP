#include<iostream>
#include<conio.h>
using namespace std;
class Car
{
    private:
    int a, b;
    public:
    int i=2;
    void set(int x, int y)   //setter(set data in private arguments)
    {
        a =x;
        b =y;
    }
    void get()              //getter(read data of private arguments)
    {
        cout<<"a: "<<a<<endl<<"b: "<<b;
    }
};
int main()
{
    Car m;
    m.set(2, 3);
    m.get();
    cout<<endl<<m.i;
    return 0;
}