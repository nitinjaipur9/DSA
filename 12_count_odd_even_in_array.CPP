#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, n, e=0, o=0;
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
    //counting even and odd numbers in array
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e++;
        }
        else{
            o++;
        }
    }
    cout<<"Even numbers in array: "<<e<<endl<<"Odd numbers in array: "<<o;
    getch();
    return 0;
}