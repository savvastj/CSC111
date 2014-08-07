//isPrime2.cpp
#include <iostream>
using namespace std;

int smallFactor(int x);

int main() {
	int n;
	cout << "Enter a number greater than 1: " << endl;
	cin >> n;
	if(n == smallFactor(n))
		cout << "That is prime";
	else
		cout << "That is not prime";
	cout << endl;
	return 0;
}

int smallFactor(int x) {
	int answer = 2;
	while(x % answer != 0)
		answer++;
	return answer;
}
