#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, max, min, i;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << endl
         << "Enter " << n << "numbers: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << endl
         << "array is: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
        ;
    }

    max = a[0];
    min = a[0];

    for (i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }

    cout << "Maximum of array is: " << max << endl;
    cout << "Minimum of array is: " << min;
    getch();
    return 0;
}