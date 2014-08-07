// PRogram that calls on numberOfDigits function
// that counts the number of digits from input

#include <iostream>
using namespace std;

int numberOfDigits(int x) {
	int length = 0;
	while (x > 0) {
		x = x/10;
		length++;
	}
	return length;
}

int main() {
	int i;
	cout << "Please enter an integer: ";
	cin >> i;
	cout << "The length of that integer is " << numberOfDigits(i) << endl;
	return 0; 
}