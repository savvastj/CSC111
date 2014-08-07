// CountDigits.cpp
#include <iostream>
using namespace std;

int nD (int x) {
	if (x < 10) return 1;
	return 1 + nD (x/10);
}

int main() {
	cout << "83425 has " << nD(83425) << " digits." << endl;
	return 0;
}
