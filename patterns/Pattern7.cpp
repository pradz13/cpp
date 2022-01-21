#include <iostream>
using namespace std;

/**
 * @brief 
 * 1
 * 22
 * 333
 * 
 * @return int 
 */

int main()
{
    int n;
    cin >> n;

    int i = 1;

    int count = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            if (j <= i)
            {
                cout << i
                     << " ";
            }
            else
            {
                cout << "  ";
            }
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}