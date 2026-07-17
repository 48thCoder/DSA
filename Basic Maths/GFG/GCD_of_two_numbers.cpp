// Given two positive integers a and b, find GCD of a and b.
// Note: Don't use the inbuilt gcd function

// BRUTE FORCE APPROACH -> TLE
class Solution {
	public:
	int gcd(int a, int b) {
		int GCD = 1;
		for (int i = 1; i <= min(a, b); i++) {
			if (a % i == 0 && b % i == 0) {
				GCD = i;
			}
		}
		return GCD;
	}
};
// Time Complexity: O(min(a, b)) 
// Space Complexity: O(1)

// BETTER APPROACH -> TLE
class Solution {
	public:
	int gcd(int a, int b) {
		int GCD = 1;
		for (int i = min(a, b); i >= 1; i--) {
			if (a % i == 0 && b % i == 0) {
				GCD = i;
				break;
			}
		}
		return GCD;
	}
};
// Time Complexity: O(min(a, b)) 
// Space Complexity: O(1)

// OPTIMAL SOLUTION (Euclidean Algorithm - Iterative)
class Solution {
	public:
	int gcd(int a, int b) {
		int n1 = a, n2 = b;
		while (n1 > 0 && n2 > 0) {
			if (n1 > n2) {
				n1 %= n2;
			}
			else {
				n2 %= n1;
			}
		}
		return (n1 == 0)? n2 : n1;
	}
};
// Time Complexity: O(log(min(a, b)))
// Space Complexity: O(1)
