// sumDigits.cpp
#include <iostream>
using namespace std;

int sumDigits(int x) {
		int digitSum = 0;;
		while (x > 0) {
			int lastDigit = x % 10;
			digitSum += lastDigit;
			x = x/10;
		}
	return digitSum;
}

int main() {
	int n;
	cout << "Enter an integer: ";
	cin >> n;
	cout << "The sum of its digits is: " << sumDigits(n) << endl;
	return 0;
}