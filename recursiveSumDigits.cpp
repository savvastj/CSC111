// recursiveSumDigits.cpp
#include <iostream>
using namespace std;

int sumDigits(int x) {
	if (x < 10) return x;
	return sumDigits(x/10) + sumDigits(x%10);
}

int main() {
	int n;
	cout << "Enter an integer: ";
	cin >> n;
	cout << "The sum of its digits is: " << sumDigits(n) << endl;
	return 0;
}