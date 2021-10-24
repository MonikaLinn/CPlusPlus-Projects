

#include <iostream>

using namespace std;

int main() {

	int y = 0;
	while (y == 0) {

		char startLwAlp = 'A';
		char endLwAlp;

		cout << "Enter a letter: " << endl;
		cin >> endLwAlp;

		if (endLwAlp >= 'a' && endLwAlp <= 'z') {
			cout << "Please enter a valid letter" << endl;
		}
		else if (endLwAlp >= 'B' && endLwAlp <= 'Z') {

					for (char lwalpCh = startLwAlp; lwalpCh <= endLwAlp; lwalpCh++) {
						cout << lwalpCh << " ";
						
					}
					cout << "\n";
		
		}
		else {
			cout << "Please enter a valid letter" << endl;
		}
	}
} 
