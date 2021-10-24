
#include <iostream>

using namespace std;

int main()
{

	//Setting up variables
	char letter;

	//User Inputs
	cout << "Enter any character" << endl;
	cin >> letter;

	//Calculations
	if ('a' <= letter && letter <= 'z')
		cout << "Yes, " << letter << " is a lowercase character";
	
	else if ('A' <= letter && letter <= 'Z')
		cout << "No, " << letter << " is not a lowercase character";
	
	else
		cout << "No, it is not a lowercase character";
	
	
	return 0;
}

