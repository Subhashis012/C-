#include <iostream>
using namespace std;
// class class_name{
//     int data1;
//     int data2;
// };
// class Student{
//     string name;
//     int roll_no;
// };
class fruit
{
public:
    string name;
    string colour;
};
int main()
{
    fruit apple; // object
    apple.name = "Apple";
    apple.colour = "Red";
    cout << apple.name << " " << apple.colour << endl;
    // pointer object hole '.' opertator kaj kora jai na tokhon '->' operator kaj kora jai
    fruit *mango = new fruit();
    mango->name = "Mango";
    mango->colour = "Yellow";
    cout << mango->name << " " << mango->colour << endl;
    return 0;
}