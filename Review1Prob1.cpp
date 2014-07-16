/* Review Sheet 1 Prblem 1
The pogramm must:
1) Ask the user to enter a posisitve integer n
2) Until the user enters a positive int for n, it makes him enter another
value for n
3) The program prints a triangle with n rows, where the rows are formed
by using the characters X and O in sequence
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	int n, i;
	cout << "Please enter a positive integer: ";
	cin >> n;
	while (n <= 0) {
		cout << "Invalid number.  Please enter a positive intger: ";
		cin >> n; 
	} 
	for (i = 1; i <= n; i++) {
		if (i % 2 != 0)
			cout << string(i, 'X') << endl;
		else
			cout << string(i, 'O') << endl;
	}
	return 0;
}

