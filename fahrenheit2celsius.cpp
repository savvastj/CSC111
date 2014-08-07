//fahrenheit2celsius.cpp
#include <iostream>
using namespace std;
int main() {
	int f;
	double c;
	cout << "Enter temperature in Fahrenheit: ";
	cin >> f;
	c = (f - 32) * ((double)5)/9;
	cout << "In Celsius that is " << c << endl;
	return 0;
}

