
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << setprecision(2) << fixed << showpoint;
	//setting up variables
	int P;
	int R;
	double Premium; 
	double Regular; 
	int Subtotal; 
	int Pre;
	int Reg;
	Reg = 40;
	Pre = 80;

	//User inputs
	cout << "How many tickets would you like to purchase?" << endl;
	cout << "Premium tickets 80$:  ";
	cin >> P; 
	cout << "Regular tickets 40$:  ";
	cin >> R; 

	// Calculations
	Premium = 80 * P;
	Regular = 40 * R;
	float Taxrate = 0.0925; //9.25%
	Subtotal = Regular + Premium;
	float Tax = Subtotal * Taxrate;
	float Total = Tax + Subtotal;

	//Print of the Invoice
	cout << "\nInvoice" << endl; 
	cout << "Premium:  $" << Pre << " x " << P << " $" << Premium << endl;
	cout << "Regular:  $" << Reg << " x " << R << " $" << Regular << endl;
	cout << "Tax (" << (Taxrate * 100) << "%):      $" << Tax << endl; 
	cout << "Total:            $" << Total << endl;

	return 0; 

}