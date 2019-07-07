#include<iostream>
#include<conio.h>

using namespace std;

int main ()
{
	int i, sum=0, num;

	
	cout << "Enter a number: ";
	cin >> num;

	while (num >0)
		{
		for (i=1; i<=num; i++)
		{
				sum = (num*(num+1))/2;
		}
			cout << "The sum of all whole numbers from 1 to " << num << " is "<<sum << endl;
			cout << "Enter a number: ";
			cin >> num;
		}
		cout << "Thank you!" << endl;
		
	getch();
return 0;
}
