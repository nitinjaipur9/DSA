#include <iostream>
#include <conio.h>
using namespace std;
void func(int a[], int size);
int main()
{
    int x[4] = {0, 1, 2, 3};
    func(x, 4);
    return 0;
}
void func(int a[], int size)
{
    for (int x = 0; x < size; x++)
    {
        cout << a[x] << endl;
    }
}