#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Type a number: ";
    cin >> x;
    if(x > 0) {
        cout << "The number : " << x << " is positive";
    } else if(x < 0) {
        cout << "The number : " << x << " is negetive";
    } else {
        cout << "The number : " << x << " is equal to zero";
    }
    return 0;
}