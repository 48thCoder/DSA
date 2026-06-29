// Given a positive integer n, The task is to find the value of Σi F(i) where i is from 1 to n and function F(i) is defined as the sum of all divisors of i.

// BRUTE FORCE APPROACH
class Solution {
	public:
	long long sumOfDivisors(long long n) {
		long long sum = 0;
		for (long long i = 1; i <= n; i++) {
			for (long long j = 1; j <= i; j++) {
				if (i % j == 0) {
					sum += j;
				}
			}
		}
		return sum;
	}
};
// Time Complexity: O(n^2)
// Space Complexity: O(1)

// OPTIMAL SOLUTION
class Solution {
	public:
	long long sumOfDivisors(long long n) {
		long long sum = 0;
		for (long long i = 1; i <= n; i++) {
			sum += i * (n/i);
		}
		return sum;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)
