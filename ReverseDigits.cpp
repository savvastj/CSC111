//ReverseDigits.cpp
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int n;
	cout << "Give me a number greater than 0: ";
	cin >> n;
	if (n <=0) {
		cout << "Input error\n";
		exit(1);
	}
	while (n>0) {
		cout << n%10;
		n = n/10;
	}
	cout << "\n";
	return 0;
}
