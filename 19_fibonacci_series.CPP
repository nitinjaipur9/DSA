#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, t1=0, t2=1, r;
    cout<<"Enter limit number: ";
    cin>>n;
    r=t1+t2;
    cout<<t1<<", "<<t2<<", ";
    while(n>=r)
    {
        cout<<r<<", ";
        t1=t2;
        t2=r;
        r=t1+t2;
    }
    return 0;
}