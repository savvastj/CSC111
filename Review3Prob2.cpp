// Midterm Review Sheet 3 Problem 2 with multiple parts
#include <iostream>
#include <cmath>
using namespace std;

// // Part 1 Print all integers from number down to 10
// int main() {
// 	int number;
// 	cout << "Enter an integer: ";
// 	cin >> number;
// 	if (number >= 10) {
// 		for (int i = number; i >= 10; i--)
// 			cout << i << " ";
// 	}
// 	return 0;
// }

//  Answer to the above can also be:

// while (number >= 10) {
// 	cout << number << " ";
// 	number--;
// }


// // Part 2: Print tha value of the sum of squares of x and y
// int main() {
// 	double x, y;
// 	cout << "Enter two numbers: ";
// 	cin >> x >> y;
// 	cout << x*x + y*y << endl;
// 	return 0;
// }

// // Part 3: Calculate x as the decimal that represents 5/7
// int main() {
// 	double x;
// 	x = 5.0/7.0;
// 	cout << x << endl;
// 	return 0;
// }

// Part 4: Print the sum of the square roots of all numbers from
// 1048576 to 5764801

int main() {
	double sum;
	for (int i = 1048576; i <= 5764801; i++) 
		sum += sqrt((double) i);
	cout << sum << endl;
	return 0;
}