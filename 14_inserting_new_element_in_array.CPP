#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, n, v, p;
    cout<<"Enter numbers of array members: ";
    cin>>n;
    int a[n+1];
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
    //entering number
    cout<<"Enter number to insert in array: ";
    cin>>v;
    //entering position
    cout<<"Enter position at at which number is inserted: ";
    cin>>p;
    //shifting number of greater index than wanted index
    for(i=(n-1);i>=(p-1);i--)
    {
        a[i+1] = a[i];
    }
    //inserting number at wanted index
    a[p-1] = v;
    //array after inserting new number
    for(i=0;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
    getch();
    return 0;
}