/* Review sheet 2 Problem 1 
Write the program that does the following
1) Asks the user to enter a positive integer n 
2) If the user enters a non-positive integer for n, terminate program
3) The program prints a triangle with n rows using the number r to make
the characters on row number r
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;
	if (n <= 0)
		return 0;
	for (int i = 1; i <= n; i++) {
		for (int c = 1; c <= i; c++)
			cout << i;
		cout << endl;
	}
	return 0;
}