#include <iostream>
using namespace std;

/**
 * @brief Consider the number as n. The logic will be to divide the number by 2 to (n-1).
 * If the remainder for all is not equal to zero, then the number is prime else not.
 * 
 * @return int 
 */
int main() {
    int number;
    bool isPrime = true;

    cout << " Enter the number :";
    cin >> number;

    for (int i = 2; i <= (number - 1); i++) {
        if(number % i == 0) {
            isPrime = false;
            break;
        }
    }

    cout << "The number : " << number << " is " << (isPrime ? "Prime" : "Not Prime");
}