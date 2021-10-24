#include <iostream>

using namespace std;

int main() {
    int number;
    int row = 0;
    int colum = 0;

    cout << "Enter an integer: ";
    cin >> number;

    while (number % 2 != 0) {
        cout << "Input: " << number << "\nPlease try again!\n\n";
        cout << "Enter an integer: ";
        cin >> number;
    }

    if (number % 2 == 0) {
        cout << "Input: " << number << "\n\n";

        while (row <= number) {
            colum = 0;
            row++;

            while (colum <= number) {
                cout << "X";
                colum++;
            }

            cout << "\n";
        }
    }

    return 0;
}