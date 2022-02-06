#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,j,t;
    cout<<"Enter numbers of array members: ";
    cin>>n;
    int a[n];
    //input data to array
    cout<<"Enter "<<n<<" numbers"<<endl;
    for(i=0;i<n;i++)   
    {
        cin>>a[i];
    }
    //print data of array
    cout<<"Elements of arrays are: "<<endl;
    for(i=0;i<n;i++)   
    {
        cout<<a[i]<<endl;
    }
    //arrenging in deccending order
    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    //printing in deccending order
    cout<<"Array in deccending order: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    getch();
    return 0;
}