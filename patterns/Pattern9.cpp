#include <iostream>
using namespace std;

/**
 * @brief 
 * 1
 * 2 1
 * 3 2 1
 * 4 3 2 1
 * @return int 
 */

int main()
{
    int n;
    cin >> n;

    int row = 1;

    int currentRow = 1;

    while (row <= n)
    {
        int col = 1;
        currentRow = row;
        while (col <= n)
        {
            if (col <= row)
            {
                cout << currentRow
                     << " ";

                currentRow = currentRow - 1;
            }
            else
            {
                cout << "  ";
            }
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}