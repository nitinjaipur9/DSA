#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, r=0, d;
    cout<<"Enter number: ";
    cin>>n;
    while(n!=0)
    {
        d = n%10;
        r=(r*10)+d;
        n=n/10;
    }
    cout<<r;
}