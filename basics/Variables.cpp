#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Variables
 * int - 4 bytes
 * char - 1 byte
 * bool - 1 byte
 * float - 4 bytes
 * double - 8 bytes
 * 
 * @return int 
 */
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
    cout << "Constant : " << PI << endl;

    //Typecast
    int a = 'a';
    cout << "char to int : " << a;
}
