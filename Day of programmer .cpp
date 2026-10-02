#include<iostream>
using namespace std;
void main()
{
	int day256;
	cout << "enter your present year =";
	int year;
	cin >> year;
	if (year == 1918)
		cout << "26.09.1918" << endl;
	
	if (year >= 1700 && year <= 1917)
		if (year % 4 == 0)
			cout << "Date of day 256 = 12.09." << year << endl;

		else
			cout << "Date of day 256 = 13.09. :" << year;

	else
		if (year >= 1919 && year <= 2700)
			if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
				cout << "Date of Day 256= 12.09." << year << endl;
			else
				cout << "Date of  day 256 =13.09," << year << endl;
			
	
	


	
	system("pause");
}
