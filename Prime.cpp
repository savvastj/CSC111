//Prime.cpp
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int number;
	cout << "Enter an integer greater than 1: ";	
	cin >> number;
	if (number <= 1) exit(1);
	int tryFactor = 2;
	while (tryFactor < number) {
		if (number % tryFactor == 0) {
			cout << "Your number is not prime. ";
			cout << "It has a factor = " << tryFactor << endl;
			return 0;
		}
		tryFactor++;
	}
	cout << "Your number is prime." << endl;
	return 0;
}
