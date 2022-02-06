#include<conio.h>
#include<iostream>
using namespace std;
class Demo
{
    //by default all data member and member funtions are private
    int age, std;
    static int count; //default value of count is 0
    public:
     void set()
     {
         cout<<"age: ";
         cin>>age;
         cout<<"Class: ";
         cin>>std;
         count++;
     }
     void get()
     {
         cout<<"Age is: "<<age<<endl<<"Class is: "<<std<<endl<<"Count is:"<<count<<endl;
     }
};
int Demo :: count;  //this shows static member is assosiated with class, not with object.
//every object have its own age, std but share onle 1 count. And count is here property of class Demo.

int main()
{
    Demo d1, d2, d3;
    d1.set();
    d1.get();
    d2.set();
    d2.get();
    d3.set();
    d3.get();
}