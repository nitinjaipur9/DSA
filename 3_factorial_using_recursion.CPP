#include <iostream>
#include <conio.h>
using namespace std;
int fact(int);
int main()
{

    int a;
    cout << "Enter number: ";
    cin >> a;
    cout << "Factorial of " << a << " is " << fact(a);
    return 0;
}
int fact(int n)
{
    int f;
    if (n < 2)
    {
        return 1;
    }

    f = n * fact(n - 1);
    return f;
}