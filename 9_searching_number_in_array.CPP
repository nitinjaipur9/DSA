#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, n, x, y = -1;
    cout << "Enter numbers of array members: ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " numbers" << endl;
    for (i = 0; i < n; i++) //input data to array
    {
        cin >> a[i];
    }
    cout << "Elements of arrays are: " << endl;
    for (i = 0; i < n; i++) //print data of array
    {
        cout << a[i] << endl;
    }
    cout << "Enter number which you want to search in array: " << endl;
    cin >> x;
    for (i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            y = i;
            break;
        }
    }
    if (y != -1)
    {
        cout << x << " is at " << y << " index";
    }
    else
    {
        cout << x << " is not found in array";
    }
    getch();
    return 0;
}