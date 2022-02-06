#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
    int n, i;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" numbers: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Reverse of the array is: "<<endl;
    for(i=(n-1);i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
}