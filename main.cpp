#include <iostream>
#include "CalcExp.h"

using namespace std;

int main() {
    // Create an instance of CalcExp
    CalcExp trip;

    // Prompt user for trip details
    double totMiles, gasPrice, milesPerGallon, parkFees, tollsFees;
    cout << "Enter total miles for the trip: ";
    cin >> totMiles;
    cout << "Enter gas price per gallon: $";
    cin >> gasPrice;
    cout << "Enter miles per gallon: ";
    cin >> milesPerGallon;
    cout << "Enter parking fees: $";
    cin >> parkFees;
    cout << "Enter tolls fees: $";
    cin >> tollsFees;

    // Set values for the trip
    trip.setValues(totMiles, gasPrice, milesPerGallon, parkFees, tollsFees);

    // Calculate total gallons needed
    trip.CalcTotGallons();

    // Calculate gas expenses
    trip.CalcGasExp();

    // Calculate total trip expenses
    trip.CalcTotExpense();

    // Retrieve and display trip details
    cout << "\nTrip Details:\n";
    cout << "Total Miles: " << trip.getTotMiles() << endl;
    cout << "Gas Price: $" << trip.getGasPrice() << " per gallon" << endl;
    cout << "Miles Per Gallon: " << trip.getMPG() << endl;
    cout << "Total Gallons: " << trip.getTotGallons() << endl;
    cout << "Total Gas Expense: $" << trip.getTotGasExp() << endl;
    cout << "Total Trip Expense: $" << trip.getTotExpense() << endl;
}
