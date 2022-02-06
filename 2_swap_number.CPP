#include <iostream>
#include <conio.h>
using namespace std;
void swap(int *, int *);
int main()
{
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    swap(a, b);
    cout << "After swapping" << endl;
    cout << "a: " << a << endl
         << "b: " << b;
    return 0;
}
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

/*  int* p1 =&a;
    means:
    p1 = &a;
    *p1 = a;
*/