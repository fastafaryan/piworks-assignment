#include <iostream>

using namespace std;

int main() {
    // define variables and get value
    int a, b;
    cout << "Please give a number as 1st variable: ";
    cin >>  a;
    cout << "Please give a number as 2nd variable: ";
    cin >>  b;

    // swap values 
    a = a + b;
    b = a - b;
    a = a - b;
    
    // print values after the swap 
    cout << "The value of the 1st variable:" << a << endl;
    cout << "The value of the 2nd variable:" << b << endl;
}