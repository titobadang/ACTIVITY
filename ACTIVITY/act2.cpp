
#include<conio.h>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	{
	float Bill, Gallon, PenaltyBill, UnpaidBal;
	
	cout << "water Consumption in Gallons" << endl;
	cin >> Gallon;
	Bill = (Gallon * 1.10) + 35;
	cout << "Unpaid balance (if any), else put 0" << endl;
	cin >> UnpaidBal;
	PenaltyBill = Bill + 20;
	if (UnpaidBal>0)
	
	cout << PenaltyBill << "Php to be paid" << endl;
	else if (UnpaidBal==0)
	
	cout << Bill <<"Php to be paid" <<endl;
	else
	cout << "Invalid Input" << endl;
	return 0;
	}
	
