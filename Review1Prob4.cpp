/* The Program will do the following:
1) Ask the user to enter a positive integer less than 5000
2) If the entered number is out of range, print "Wrong" and terminate program 
3) Then print the sum of sq rt of digits in the number that was entered
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
	int n;
	cout << "Enter a positive integer less than 5000: ";
	cin >> n;
	if (n >= 5000 || n <= 0) {
		cout << "Wrong!\n";
		exit(1);
	}
	double ans = 0.0;
	while (n > 0) {
		ans = ans + sqrt((double) (n % 10));
		n = n /10;
	}
	cout << "Sum of square roots of digits: " << ans << endl;
	return 0;
}