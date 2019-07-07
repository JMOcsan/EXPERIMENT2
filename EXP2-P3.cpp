#include<iostream>
#include<conio.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
 
	int x;
	double V, y;
	const double z = 2.5;
	
	cout << "Input the value of x: " << endl;
	cin >> x;
	cout << "Input the value for y: " << endl;
	cin >> y;

	cout << setprecision(2) << fixed;


		switch(x)
		{
		case 1:
				if (y>1 && y<5)
				{
				V = x*y*z;
				cout << "The Value of V is: " << setw(10) << V << endl;
				}
				else if (y>=5)
				{
				V = x + (y/z);
				cout << "The Value of V is: " << setw(10) << V << endl;
				}
				else
				{
				V = x + y + z;
				cout << "The Value of V is: " << setw(10) << V << endl;
				}	
				break;

		case 2:
			if (y<=5)
			{
			V = abs((x-y)/z);
			cout << "The Value of V is: " << setw(10) << V << endl;
			}
			else if (y>5)
			{
			V = x-sqrt(y+z);
			cout << "The Value of V is: " << setw(10) << V << endl;
			}
			break; 
		default:
			{
			V = x + y + z;
			cout << "The Value of V is: " << setw(10) << V << endl;
			}		
		}
	getch();
	return 0;
}
