#include <iostream>
#include <conio.h>
using namespace std;
//type 1
struct Car //union is also same but there only 1 member can be access i.e. either power or torque. can't use both in union.
{
    int power;
    float torque;
};
//type 2
typedef struct bike
{
    int p;
    float t;
} ep;
int main()
{
    struct Car venue;
    venue.power = 83;
    venue.torque = 114;
    cout << "Torque: " << venue.torque << " and power: " << venue.power << endl;
    ep bullet;
    bullet.p = 19;
    bullet.t = 28;
    cout << "Torque: " << bullet.t << " and power: " << bullet.p << endl;
    getch();
    return 0;
}