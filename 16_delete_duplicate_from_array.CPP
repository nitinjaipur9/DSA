#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n;
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
    //deleting duplicate from array
    for(i=0;i<n;i++)
    {
        for(int j=(i+1);j<n;)
        {
            if(a[i]==a[j])
            {
                for(int k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;         
            }
            else
            {
                j++;
            }
        }
    }
    cout<<"1"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    getch();
    return 0;
}