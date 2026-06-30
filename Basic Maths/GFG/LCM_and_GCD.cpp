// Given two integers a and b. You have to compute their LCM and GCD and return an array containing their LCM and GCD.

// BRUTE FORCE APPROACH
class Solution {
	public:
	vector<int> lcmAndGcd(int a, int b) {
		int lcm = a * b;
		for (int i = max(a, b); i <= a * b; i++) {
			if (i % a == 0 && i % b == 0) {
				lcm = i;
				break;
			}
		}
		
		int gcd = 1;
		for (int i = min(a, b); i >= 1; i--) {
			if (a % i == 0 && b % i == 0) {
				gcd = i;
				break;
			}
		}
		
		return {lcm, gcd};
	}
};
// Time Complexity: O(a*b)
// Space Complexity: O(1)

// BETTER APPROACH
class Solution {
	public:
	vector<int> lcmAndGcd(int a, int b) {
		int gcd = 1;
		for (int i = min(a, b); i >= 1; i--) {
			if (a % i == 0 && b % i == 0) {
				gcd = i;
				break;
			}
		}
		
		int lcm = (a / gcd) * b;
		
		return {lcm, gcd};
	}
};
// Time Complexity: O(min(a, b))
// Space Complexity: O(1)

// OPTIMAL APPROACH (Euclidean Algorithm - Iterative)
class Solution {
	public:
	vector<int> lcmAndGcd(int a, int b) {
		int n1 = a, n2 = b;
		while (n1 > 0 && n2 > 0) {
			if (n1 > n2) {
				n1 %= n2;
			}
			else {
				n2 %= n1;
			}
		}
		int gcd = (n1 == 0) ? n2 : n1;
		
		int lcm = (a / gcd) * b;
		
		return {lcm, gcd};
	}
};
// Time Complexity: O(log(min(a, b)))
// Space Complexity: O(1)

// USING BUILT-IN FUNCTION OF C++ (Not Recommended)
class Solution {
	public:
	vector<int> lcmAndGcd(int a, int b) {
		int gcd = __gcd(a, b);
		
		int lcm = (a / gcd) * b;
		
		return {lcm, gcd};
	}
};
// Time Complexity: O(log(min(a, b)))
// Space Complexity: O(1)
