#include <iostream>
using namespace std;

/**
 * @brief Check whether a given character is lower case or uppercase or a number
 * 
 * @return int 
 */
int main()
{
    char ch;
    cout << "Enter a Character : " << endl;
    cin >> ch;
    if (ch >= 97 and ch <= 122)
    {
        cout << "This is a lowercase Character. " << endl;
    }
    else if (ch >= 65 and ch <= 90)
    {
        cout << "This is an Uppercase Character. " << endl;
    }
    else
    {
        cout << "This is a Numeric Character. " << endl;
    }
    return 0;
}