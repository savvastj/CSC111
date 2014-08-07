// ReverseAndStoreDigits.cpp
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int n;
	int answer = 0;
	cout << "Give me a number > 0: ";
	cin >> n;
	if (n <= 0) {
		cout << "Input error\n";
		exit(1);
	}
	while (n > 0) {
		answer = answer*10 + n%10;
		n = n/10;
	}
	cout << answer << endl;
	return 0;
}
