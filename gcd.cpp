//gcd.cpp Euclid's algorithm
#include <iostream>
using namespace std;

int gcd(int x, int y){
	if(y == 0) return x;
	return gcd(y, x%y);
}
int main(){
	int a, b;
	cout << "Enter two integers: " << endl;
	cin >> a >> b;
	cout << "The GCD is: " << gcd(a, b) << endl;
	return 0;
}
