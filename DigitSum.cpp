//DigitSum.cpp
#include <iostream>
using namespace std;
int main() {
	for (int c = 1; c <= 1000; c++) {
		int digitSum = 0;
		int tempCopy = c;
		while (tempCopy > 0) {
			int lastDigit = tempCopy % 10;
			digitSum += lastDigit;
			tempCopy = tempCopy/10;
		}
		if (digitSum == 20) cout << c << " ";
	}
	cout << endl;
	return 0;
}
