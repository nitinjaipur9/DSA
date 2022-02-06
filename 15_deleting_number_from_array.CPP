#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, n, v, p, count=0;
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
    //entering number
    cout<<"Enter number to delete from array: ";
    cin>>v;
    //finding number in array
    for(i=0;i<n;i++)
    {
        if(a[i]==v)
        {
            p=i;
            count=1;
            break;
        }
    }
    //deleting number and shifting number of greater index than wanted index
    if(count==1)
    {
        for(i=p;i<n;i++)
        {
            a[i]=a[i+1];
        }
    }
    else
    {
        cout<<"Number not found";
    }
    //array after deleting number
    for(i=0;i<(n-1);i++)
    {
        cout<<a[i]<<endl;
    }
    getch();
    return 0;
}