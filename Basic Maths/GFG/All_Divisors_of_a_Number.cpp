// Given an integer n, return all the divisors of n in the ascending order.

// BRUTE FORCE APPROACH -> TLE
class Solution {
	public:
	vector<int> getDivisors(int n) {
		vector<int> result;
		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				result.push_back(i);
			}
		}
		return result;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(d) where, d is the number of divisors

// OPTIMAL APPROACH
class Solution {
	public:
	vector<int> getDivisors(int n) {
		vector<int> result;
		for (int i = 1; i * i <= n; i++) {
			if (n % i == 0) {
				result.push_back(i);
				if (i != n/i) {
					result.push_back(n/i);
				}
			}
		}
		sort(result.begin(), result.end());
		return result;
	}
};
// Time Complexity: O(√n)
// Space Complexity: O(d) where, d is the number of divisors
