//fahren.cpp
//применение cin и \n
#include <iostream>

using namespace std;

int main()
{
	int ftemp;		//температура по фаренгейту
	cout << "Enter the temperature in Fahrenheit: ";
	cin >> ftemp;
	int ctemp = (ftemp - 32) * 5 / 9;
	cout << "The Celsius temperature is " << ctemp << '\n';

	system("pause");
	return 0;
}