#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, i;
    int sum = 0;
    cout << "Enter number of member in array: ";
    cin >> n;
    int a[n];
    cout << endl
         << "Enter " << n << " numbers" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "array is: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    cout << "Sum of array: " << sum;
    getch();
    return 0;
}