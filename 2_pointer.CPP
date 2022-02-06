#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;  //variables
    int* p1 = &a;  //pointer for a
    int* p2;
    p2 = &b;  //pointer for b
    a = 10;
    b = 20;
    cout<<"a: "<<a<<endl;
    cout<<"a: "<<*p1<<endl;
    cout<<"location of a: "<<p1<<endl;
    cout<<"location of a: "<<&a;
    getch();
    return 0;
}