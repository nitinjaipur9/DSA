#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, n, d, c=0;
    cout<<"Enter numbers of array members: ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" numbers"<<endl;
    for(i=0;i<n;i++)   //input data to array
    {
        cin>>a[i];
    }
    cout<<"Elements of arrays are: "<<endl;
    for(i=0;i<n;i++)   //print data of array
    {
        cout<<a[i]<<endl;
    }
    cout<<"Enter number of which duplicate is to find: ";
    cin>>d;
    for(i=0;i<n;i++)
    {
        if(a[i]==d)
        {
            c++;
        }
    }
    cout<<d<<" is present "<<c<<" times in the array";
    getch();
    return 0;
}