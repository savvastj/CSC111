// prime100.cpp
// Contains a functions to test whether a paramter is prime
// Apply that function to print all prime numbers up to 100

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
	int i;

	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) 	// if i divides ne evenly
			return false; 	// n is nto prime
	}
	return true; 	// If no divisor found, n is prime
}

int main() {
	int i;

	cout << "This program prints all primes up to 100:" << endl;
	for (i = 2; i <= 100; i++) {
		if (isPrime(i) == true)
			cout << i << endl;
	}
	return 0;
}
