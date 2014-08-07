// TableOfOdds.cpp
#include <iostream>
using namespace std;
int main() {
	cout << "\t\tTable of Odds\n\n"; 
	cout << "\tOdd Number" << endl;  
	for (int odd = 1; odd <= 100; odd = odd +2) {
		cout << "\t" << odd << endl;
	}
	return 0;
}
