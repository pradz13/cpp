#include <iostream>
#include <string>
using namespace std;

int main() {
    int intVar = 15;
    bool boolVar = true;
    string strVal = "Pradipta Nag";
    char charVar = 'C';
    double doubleVar = 22.35;

    cout << intVar << endl;
    cout << boolVar << endl;
    cout << strVal << endl;
    cout << charVar << endl;
    cout << doubleVar << endl;

    //sizeof gives the memory a particular variable is holding
    cout << "Size of Integer : " << sizeof(intVar) << endl;

    int x = 5, y = 10;
    int sum = x + y;
    cout << "Sum : " << sum << endl;

    //Constants
    const float PI = 3.14;
    cout << "Constant : " << PI;
}
