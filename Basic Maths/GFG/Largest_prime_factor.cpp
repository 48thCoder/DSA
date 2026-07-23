// Given a number n, your task is to find the largest prime factor of n.

class Solution {
	public:
	int largestPrimeFactor(int n) {
		int maxPrime = n;
		for (int i = 2; i <= n; i++) {
			while (n % i == 0 && n > 1) {
				maxPrime = i;
				n = n / i;
			}
		}
		return maxPrime;
	}
};

// Time Complexity: O(√n)
// Space Complexity: O(1)
