#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

double galls, balance, bill;

	cout << "Customer's Water bill" << endl;
	cout << "Enter the total of the readings from the previous and this month in gallons. " << endl;
	cin >> galls;
	cout << "Input customer's unpaid balance: \n" << endl;
	cin >> balance;


	if (balance > 0)
	{
	bill = 55 + (galls*1.10) + balance;
	cout << "A late charge of P20 and P35 for water demand charge was added onto the bill." << endl; 
	cout << "The current water bill to be paid is: "<<  bill << endl;
	}
	else
	{
	cout << "P35 was added for water demand charge." << endl;
	bill = 35 + (galls*1.10);
	cout << "The current water bill to be paid is: " << bill << endl;
	}

	getch();
	return 0;

}
