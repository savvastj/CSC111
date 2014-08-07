/* This is a program that:
1) Asks the user to enter a positive integer n 
2) If the user enters a non-positive integer the program terminates
3) The program prints a rectangle of * symbols with n rows and twice as many 
columns
*/

#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Please enter a positive integer: ";
	cin >> n;
	if (n <= 0)
		return 0;
	for (int i = 1; i <= n; i++) {
		for (int c = 1; c <= 2*n; c++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}