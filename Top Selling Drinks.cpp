
#include <iostream>
using namespace std;

//prototypes
double findAverageSales(int sold[], int five);
void topSales(string sodasNames[], int sold[], int five, double avgSal);

int main()
{
    const int DRINKS = 5;
    //Declaring the Array
    string sodasNames[DRINKS] = { "Mint","Lime","Berry","Vanilla","Bacon"};
    int sold[DRINKS];
    
    for (int i = 0; i < DRINKS; i++)
    {
        cout << "Number of sales for, " << sodasNames[i] << " flavored soda: ";
        cin >> sold[i];
        cout << endl;
    } 
    double avgSal = findAverageSales(sold, DRINKS);
    topSales(sodasNames, sold, DRINKS, avgSal);
        return 0;
    }
//This function finds the average 
double findAverageSales(int sold[], int five)
{    
    double total = 0;
    for (int i = 0; i < five; i++)
        total += sold[i];
    return total / five;
 }
//This function takes the average and compares to see which drink sold the most
 void topSales(string sodasNames[], int sold[], int five, double avgSal)
    {
            cout << "Top Sold Flavor(s) This Past Month Is: " << endl;
        for (int i = 0; i < five; i++)
            if (sold[i] >= avgSal)
                cout << "" << sodasNames[i] << endl;
        
    }