// List of functions for final

// checks if prime
bool isPrime(int n){
	int i;

	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) 	// if i divides ne evenly
			return false; 	// n is nto prime
	}
	return true; 	// If no divisor found, n is prime
}

// reverses order of digits
int reverse(int n) {
	int answer = 0;
	while (n > 0) {
		answer = answer*10 + n%10;
		n = n/10;
	}
	return answer;
}

// converts to binary
void toBinary(int x){
	if (x <= 1) cout << x;
	else {
		toBinary(x/2);
		cout << x%2;
	}
	return;
}

// GCD
int gcd(int x, int y){
	if(y == 0) return x;
	return gcd(y, x%y);
}

// Number of digits
int nD (int x) {
	if (x < 10) return 1;
	return 1 + nD (x/10);
}

int numberOfDigits(int x) {
	int length = 0;
	while (x > 0) {
		x = x/10;
		length++;
	}
	return length;
}

// sum of digits
int sumDigits(int x) {
	if (x < 10) return x;
	return sumDigits(x/10) + sumDigits(x%10);
}

int sumDigits(int x) {
		int digitSum = 0;;
		while (x > 0) {
			int lastDigit = x % 10;
			digitSum += lastDigit;
			x = x/10;
		}
	return digitSum;
}