#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    int d, b[32];
    int i = 0;
    cout << "Decimal: ";
    cin >> d;
    if (d == 0)
    {
        cout << "Binary: " << 0;
    }
    else
    {
        while (d)
        {
            b[i] = d % 2;
            d = d / 2;
            i++;
        }
        cout << "Binary: ";
        for (int j = (i - 1); j >= 0; j--)
        {
            cout << b[j];
        }
    }
    return 0;
}