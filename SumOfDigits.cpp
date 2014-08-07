// SumofDigits.cpp
#include <iostream>
using namespace std;

int sum(int x) { // definition
	if (x<10) return x; // basis
	return x % 10 + sum(x/10); //recursive
}

int main() { // code starts
	cout << "The sum of the digits of 53425 is " << sum(53425) << "." << endl	;
	return 0;
}


	
