#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

	double loan, rate, interest, totalPaid, monthlyPay;
	int numPay;
	cout << "Loan Amount: ";
	cin >> loan;
	cout << "Annual interest rate: ";
	cin >> rate;
	cout << "Number of Payments: ";
	cin >> numPay;

	// calculations
	// turns rate into a decimal for calculations below
	// divide by 100 for decimal which could be used for yearly but...
	// divide by 12 to get monthly which is what problem wants
	rate = (rate / 100) / 12;
	
	//monthly payment
	monthlyPay = ((rate * pow((1 + rate), numPay)) / (pow((1 + rate), numPay) - 1)) * loan;

	//interest
	interest = (monthlyPay*numPay) - loan;

	// total paid for loan including interest
	totalPaid = loan + interest;

	// output
	cout << fixed << showpoint << setprecision(2);
	cout << endl << endl;

	cout << "Loan Amount: " << right << setw(25) << loan << endl;
	cout << "Monthly Interest Rate: " << setw(15) << rate * 100 << "%" << endl;
	cout << "Number of Payments: " << setw(18) << numPay << endl;
	cout << "Monthly Payment: " << setw(21) << monthlyPay << endl;
	cout << "Amount paid back: $ " << setw(18) << totalPaid << endl;
	cout << "Interest Paid: " << setw(23) << interest << endl;
	system("pause");
	return 0;
	
}
