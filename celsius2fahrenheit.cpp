// celsius2fahrenheit.cpp
#include <iostream>
using namespace std;
int main() {
	int celsius;
	double fahrenheit;
	cout << "Enter temperature in Celsius: ";
	cin >> celsius;
	fahrenheit = 1.8*celsius+32;
	cout << "In fahrenheit that is " << fahrenheit << endl;
	return 0;
}

