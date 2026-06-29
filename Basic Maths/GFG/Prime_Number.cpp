// Given a number n, determine whether it is a prime number or not.

// BRUTE FORCE
class Solution {
	public:
	bool isPrime(int n) {
		int count = 0;
		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				count++;
			}
		}
		return count == 2;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// OPTIMAL SOLUTION
class Solution {
	public:
	bool isPrime(int n) {
		int count = 0;
		for (int i = 1; i * i <= n; i++) {
			if (n % i == 0) {
				count++;
				if (n/i != i) {
					count++;
				}
			}
			if (count > 2) {
				return false;
			}
		}
		return count == 2;
	}
};
// Time Complexity: O(√n)
// Space Complexity: O(1)
