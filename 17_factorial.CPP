#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, f=1;
    cout<<"Enter number to find factorial: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f = f*i;
    }
    cout<<"Factorial of "<<n<<" is "<<f;
    getch();
    return 0;
}