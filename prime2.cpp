// prime2.cpp
#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n);

int main() {
	int i;

// Set up an infinite loop; break if user enters 0/
// Otherwise, evaluates n for primeness.

	while (true) {
		cout << "Enter num (0 = exit) and press ENTER: ";
		cin >> i;
		if (i == 0) // If user entered 0, EXIT
			break;
		if (prime(i))
			cout << i << " is prime" << endl;
		else 
			cout << i << " is not prime" << endl;
	}
	return 0;
}

// Prime number functuion. Test divisor from 2 to sqrt of n
// Rerturn false if a divisor found; otherwise, return true.

bool prime(int n){
	int i;

	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) 	// if i divides ne evenly
			return false; 	// n is nto prime
	}
	return true; 	// If no divisor found, n is prime
}
