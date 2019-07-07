#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

	int count;
	for (count = 1; count <= 30;)
	{
		if (count <= 10)
		{
		cout << count << ",";
		}

		else if (count > 10 && count < 28)
		{
		cout << (count = count + 1) << ",";
		}

		else
		{
		cout << (count = count + 1);
		}

		count++;
}
getch();
return 0;
}
