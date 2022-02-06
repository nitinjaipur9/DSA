#include <iostream>
#include <conio.h>
using namespace std;
int sum(int, int);
float sum(float, float);
int main()
{
    int a = 10, b = 20;
    float x = 12.6, y = 43.2;
    cout << sum(a, b) << endl;
    cout << sum(x, y);
    return 0;
}
int sum(int a1, int b1)
{
    int s = a1 + b1;
    cout << "Function 1 runs" << endl;
    return s;
}
float sum(float x1, float y1)
{
    int s = x1 + y1;
    cout << "Function 2 runs" << endl;
    return s;
}