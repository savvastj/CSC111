// ReverseAndStoreDigits.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int reverse(int n) {
	int answer = 0;
	while (n > 0) {
		answer = answer*10 + n%10;
		n = n/10;
	}
	return answer;
}


int main() {
	int numbers[10];
	// int answer = 0;
	cout << "Give me 10 numbers > 0: ";
	
	for (int i = 0; i < 10; i++) {
		cin >> numbers[i];
		if (numbers[i] <= 0) {
			cout << "Input error\n";
			exit(1);
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << reverse(numbers[i]) << endl;
	}

	return 0;
}




