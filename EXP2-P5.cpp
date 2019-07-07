#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

	int count, x=0, y=1, t;
	cout <<"Fibonacci numbers are..\n";
	for (count = 0; count < 22; count++)
	{
		if (count <= 1)
		{
		t = count;
		}

		else
		{
		t = x + y;
		x = y;
		y = t;

		}
		cout << t << ",";
}
getch();
return 0;
}
