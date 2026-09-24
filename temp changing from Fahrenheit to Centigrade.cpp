#include<iostream>
using namespace std;
int main()
{
	float temp;
	float temp_in_fahrenheit;
	float temp_in_centigrade;
	cout << "input temperature=";
	cin >>temp;
	temp_in_centigrade = 5.0 / 9.0 *(temp - 32);
	cout << "temp =" << temp_in_centigrade;
	system("pause");
}
