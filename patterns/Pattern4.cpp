#include <iostream>
using namespace std;

/**
 * @brief 
 * 321
 * 321
 * 321
 * 
 * @return int 
 */

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << (n + 1) - j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}