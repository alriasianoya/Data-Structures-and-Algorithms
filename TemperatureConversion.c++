#include <iostream>
using namespace std;
 
int main() {

    char op;
    float fahrenheit, celsius;
 
    cout << "Enter the temperature in (C, F): ";
    cin >> op;

    if (op == 'C') {
        cout << "Enter the number: ";
        cin >> celsius;
        fahrenheit = (celsius * 9.0) / 5 + 32;
        cout << fahrenheit;



    } else {
        cout << "Enter the number: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5 / 9;
        cout << celsius;
    
    } 



    return 0;
}