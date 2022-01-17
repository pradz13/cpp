#include <iostream>
#include <string>
using namespace std;

int main() {
    int side1, side2, side3;
    cout << "Enter value of first side : ";
    cin >> side1;
    cout << "Enter value of second side : ";
    cin >> side2;
    cout << "Enter value of third side : ";
    cin >> side3;

    if(side1 + side2 > side3) {
        cout << "The triangle is valid";
    } else if(side2 + side3 > side1) {
        cout << "The triangle is valid";
    } else if(side1 + side3 > side2) {
        cout << "The triangle is valid";
    } else {
        cout << "The triangle is invalid";
    }
}