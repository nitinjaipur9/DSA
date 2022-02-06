#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n, d, sum=0;
    cout<<"Enter number: ";
    cin>>n;
    while(n>0)
    {
        d = n%10;
        sum = sum+d;
        n = n/10;
    }
    cout<<"sum: "<<sum;
    return 0;
}