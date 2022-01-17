#include <iostream>
using namespace std;

int main() {
    int num, allNumberSum, evenNumberSum, oddNumberSum;
    cout << "Enter a number : ";
    cin >> num;
    cout << "All numbers between 0 to " << num << " ar as follows : ";
    for (int i = 0; i <= num; i++) {
        cout << i << " ";
        allNumberSum += i;
    }
    cout << endl << "Sum of all numbers between 0 to " << num << " is : " << allNumberSum;

    cout << endl << "All even numbers between 0 to " << num << " ar as follows : ";
    for (int i = 0; i <= num; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
            evenNumberSum += i;
        }
    }
    cout << endl << "Sum of all even numbers between 0 to " << num << " is : " << evenNumberSum;

    cout << endl << "All odd numbers between 0 to " << num << " ar as follows : ";
    for (int i = 0; i <= num; i++) {
        if(i % 2 != 0) {
            cout << i << " ";
            oddNumberSum += i;
        }
    }
    cout << endl << "Sum of all odd numbers between 0 to " << num << " is : " << oddNumberSum;
}