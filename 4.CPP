#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 4; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}