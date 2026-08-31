// Given an integer n, compute the sum of all natural numbers from 1 to n (inclusive). If n is 0, the sum should be 0.

// BRUTE FORCE APPROACH
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << sum;
	return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

// USING RECURSION
#include <iostream>
using namespace std;

int sum(int n) {
	if (n == 0) {
		return 0;
	}
	return n + sum(n - 1);
}

int main() {
	int n;
	cin>> n;
	cout << sum(n);
	return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(n)

// OPTIMAL SOLUTION (Formula Based)
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>> n;
	cout << n * (n + 1) / 2;
	return 0;
}
// Time Complexity: O(1)
// Space Complexity: O(1)
