
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    //Setting up variables

    int input;

    //User Input
    cout << "Enter an integer: ";
    cin >> input;

    //calculations
    if (input <= 0) {

        cout << "Good bye!";
    }
     do {
    //making trangle
        for (int side = input; side >= 1; side--)
        {
            for (int top = input - side; top > 0; top--)
                cout << " ";
    //setting a variable
            int triangle = side;
            while (triangle > 0)
            {
                triangle--;
                cout << "X";
            }
            cout << endl;
        }
            //ends loop      
            goto finished;

            if (input <= 0) {

                cout << "Good bye!";
            }
     } while (input > 0);
     
 finished: return 0;
    return 0;
}
