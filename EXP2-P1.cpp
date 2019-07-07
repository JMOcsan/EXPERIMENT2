#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
	cout << "Package A: P995/mo - 10 hours Access to the internet. Additional hours are P20/hr " << endl;
	cout << "Package B: P1495/mo - 20 hours Access to the internet. Additional hours are P10/hr " << endl;
	cout << "Package C: P1995/mo for Unlimited Access to the internet " << endl;
	char pack; 
	int hrs, bill;

	cout << "\n\nEnter the letter of the package you seek to avail.(Enter the letter only): \n" << endl;
	cin >> pack;

	switch(pack)

	{

		case 'A':
		case 'a': 
			cout << "How many hours did you consume? " << endl;
			cin >> hrs;
			cout << " " << endl;
			if (hrs > 10 && hrs <= 744) // fixed number of days per month is 31 days
				{
				cout << "An additional P20/hr will be added to your bill for excess use of the internet." << endl;
				bill = 995 + 20*(hrs - 10);
				cout << "Your total amount due is: " << bill << endl;
				}
				
			else if (hrs <= 10)
				{
				cout << "Total balance amount due is: P995" << endl;
				}
			else
				{
				cout << "Invalid Input " << endl;
				}
			break; 

		case 'B':
		case 'b':
			cout << "How many hours did you consume? " << endl;
			cin >> hrs;
			cout << " " << endl;
			if (hrs > 20 && hrs <= 744)
				{
				cout << "An additional P10/hr will be added to your bill for excess use of the internet." << endl;
				bill = 1495 + 10*(hrs - 20);
				cout << "Total balance amount due is: " << bill << endl;
				}

			
			else if (hrs <= 20)
				{
				cout << "Total balance due is: P1495" << endl;
				}

			else
				{
				cout << "Invalid Input" << endl;
				}
			break; 


		case 'C':
		case 'c':
			cout << "Total balance due is: P1995" << endl;
			break;
	}

	getch();
	return 0;

}
