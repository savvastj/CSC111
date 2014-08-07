//ConvertToBinary.cpp
#include <iostream>
using namespace std;

//use void to just print answer, not return
void toBinary(int x){
	if (x <= 1) cout << x;
	else {
		toBinary(x/2);
		cout << x%2;
	}
	return;
}

int main() {
	int y;
	cout << "Enter a number: ";
	cin >> y;
	toBinary(y);
	cout << endl;
	return 0;
}
