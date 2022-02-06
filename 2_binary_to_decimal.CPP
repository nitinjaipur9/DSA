#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int b, d = 0;
    int p = 1;
    cout << "Binary: ";
    cin >> b;
    while (b)
    {
        int ld = b % 10;
        d = d + (ld * p);
        b = b / 10;
        p = p * 2;
    }
    cout << "Decimal: " << d;
    return 0;
}