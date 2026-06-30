// Given an integer n, calculate the sum of series 1³ + 2³ + 3³ + 4³ + … till n-th term.

// BRUTE FORCE APPROACH
class Solution {
	public:
	int sumOfSeries(int n) {
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += (i * i * i);
		}
		return sum;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// USING FORMULA
class Solution {
	public:
	int sumOfSeries(int n) {
		int sum = n * (n + 1) / 2;
		return sum * sum;
	}
};
// Time Complexity: O(1)
// Space Complexity: O(1)

// USING RECURSION
class Solution {
	public:
	int sumOfSeries(int n) {
		if (n < 1) {
			return 0;
		}
		return (n * n * n) + sumOfSeries(n - 1);
	}
};
// Time Complexity: O(n)
// Space Complexity: O(n)
