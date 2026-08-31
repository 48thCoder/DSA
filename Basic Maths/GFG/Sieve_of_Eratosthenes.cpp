// Given a positive integer n, calculate and return all primes less than or equal to n using the Sieve of Eratosthenes algorithm.

// BRUTE FORCE APPROACH -> TLE
class Solution {
	public:
	vector<int> sieve(int n) {
		vector<int> result;
		for (int i = 2; i <= n; i++) {
			int count = 0;
			for (int j = 1; j <= i; j++) {
				if (i % j == 0) {
					count++;
				}
			}
			if (count == 2) {
				result.push_back(i);
			}
		}
		return result;
	}
};
// Time Complexity: O(n²)
// Space Complexity: O(n)

// OPTIMAL SOLUTION (Sieve of Eratosthenes)
class Solution {
	public:
	vector<int> sieve(int n) {
		vector<int> isPrime(n + 1, 1);
		isPrime[0] = isPrime[1] = 0;
		
		for (int i = 2; i * i <= n; i++) {
			if (isPrime[i]) {
				for (int j = i * i; j <= n; j += i) {
					isPrime[j] = 0;
				}
			}
		}
		
		vector<int> result;
		for (int i = 2; i <= n; i++) {
			if (isPrime[i]) {
				result.push_back(i);
			}
		}
		return result;
	}
};
// Time Complexity: O(n log(log(n)))
// Space Complexity: O(n)
