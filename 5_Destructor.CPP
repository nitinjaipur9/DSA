#include<conio.h>
#include<iostream>
using namespace std;
class Demo
{
    static int count;
    public:
     Demo()                 //constructor
     {
         cout<<"Constructor provoked"<<endl<<"Object created : "<<count+1<<endl;
         count++;
     }
     ~Demo()                //destructor
     {
         cout<<"Destructor provoked"<<endl<<"Object destroyed : "<<count<<endl;
         count--;
     }
};
int Demo :: count;
int main()
{
    Demo a;
    {                       //code block starts
        Demo b, c;
    }                       //code block closed
    return 0;
}