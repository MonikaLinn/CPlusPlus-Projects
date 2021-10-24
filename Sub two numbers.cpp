
#include <iostream>
using namespace std;

//Function prototypes declarations
int calculations(int firstInput, int secondInput);
int numberOne();
int numberTwo();

//Showing the user answer / skeleton for program
int main()
{
	int inputOne = numberOne();
	int inputTwo = numberTwo();
	int subtraction = calculations(inputOne, inputTwo);
	cout << "The sum of the two numbers are: " << subtraction << endl;
	return 0;

}

//Caluculations for subtracting the two numbers 
int calculations(int firstInput, int secondInput)
{
	int result = firstInput - secondInput;
	return result;
}

//Validating if the first number is positive, if it isn't it reprompts user.
int numberOne()
{
	int input;
	cout << "Enter the first positive number: ";
	cin >> input;

	while (input < 0)
	{
		cout << "That is an invalid input. Number must be positive\n";
		cout << "Enter the first positive number: ";
		cin >> input;
	}
	return input;
}

//Validating if the second number is positive, if it isn't it reprompts user. 
int numberTwo()
{
	int input;
	cout << "Enter the second positive number: ";
	cin >> input;

	while (input < 0)
	{
		cout << "That is an invalid input. Number must be positive\n";
		cout << "Enter the second positive number: ";
		cin >> input;
	}
	return input;
}
