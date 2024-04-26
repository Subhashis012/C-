#include <iostream>
using namespace std;

// Function overloads for adding integers and floats
int add(int &num1, int &num2) { // pass by reference
    return num1 + num2;
}

float add(float num1, float num2) { // pass by value
    return num1 + num2;
}

// Overload for adding three integers
int add(int num1, int num2, int num3) { // pass by value
    return num1 + num2 + num3;
}

int main() {
    // Initialize variables
    int a = 5, b = 4;
    float c = 3.4, d = 4.4;

    // Call the appropriate add function based on the types of input
    cout << add(c, d) <<endl;
    cout << add(a, b) <<endl;
    cout << add(a, b, 1) <<endl;

    return 0;
}