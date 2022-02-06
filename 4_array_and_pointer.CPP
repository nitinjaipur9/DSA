#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a[5] = {0, 1, 2, 3, 4};
    int *p = a;
    cout << "Value of a[0]: " << *p << endl;
    cout << "Address of a[0]: " << p;
    getch();
    return 0;
}