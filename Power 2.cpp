
#include <iostream> 
using namespace std;

//Variable
int power(int n);

int main()
{
	int n;
	cout << "Enter a nonnegative integer: ";
	cin >> n;
	do 
	{
		//If User Input is less than 1
		if (n < 1) 
		{
			cout << "Error Try Again" << endl;
			cout << "Enter a nonnegative integer: ";
			cin >> n;
		}
	} 	while (n < 1); 
	{
			//Answer
			cout << "2 ^ " << n << " = " << power(n) << endl;
	}
	
}

int power(int n)
{
	// base case
	if (n >= 1) 
		return 2 * power(n - 1);
	
	// recursive case
	else
		return 1;
	
}