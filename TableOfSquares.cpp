// TableOfSquares.cpp
#include <iostream>
using namespace std;
int main() {
	cout << "\t\tTable of Squares\n\n"; //Title
	cout << "\tNumber\t\tSquares\n"; //Col Headings
	for (int number = 1; number <= 100; number++)
		cout << "\t"  << number << "\t\t" << number*number << endl;
	return 0;
}
