#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}