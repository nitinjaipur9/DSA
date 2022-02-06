#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, n1, d, rev=0;
    cout<<"Enter number: ";
    cin>>n;
    n1=n;
    while(n1!=0)
    {
        d = n1%10;
        rev = (rev*10)+d;
        n1 = n1/10;
    }
    cout<<"number: "<<n<<endl<<"reverse: "<<rev<<endl;
    if(n==rev)
    {
        cout<<"Number is palindrom";
    }
    else
    {
        cout<<"Number is not palindrom";
    }
    return 0;
}