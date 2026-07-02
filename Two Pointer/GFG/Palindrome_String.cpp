// Given a string s, return true if the string is a palindrome. Otherwise, return false.

// ITERATIVE APPROACH
class Solution {
	public:
	bool isPalindrome(string& s) {
		int n = s.size();
		for (int i = 0; i < n; i++) {
			if (i == n/2) {
				break;
			}
			if (s[i] != s[n - i - 1]) {
				return false;
			}
		}
		return true;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// USING BUILT-IN FUNCTION
#include <bits/stdc++.h>

class Solution {
	public:
	bool isPalindrome(string& s) {
		string rev = s;
		std::reverse(rev.begin(), rev.end());
		return rev == s;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// STRING REVERSAL METHOD
class Solution {
	public:
	bool isPalindrome(string& s) {
		string rev(s.rbegin(), s.rend());
		return rev == s;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// TWO POINTER APPROACH
class Solution {
	public:
	bool isPalindrome(string& s) {
		int l = 0, r = s.size() - 1;
		while (l < r) {
			if (s[l] != s[r]) {
				return false;
			}
			l++;
			r--;
		}
		return true;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// USING RECURSION
class Solution {
	public:
	bool isPalindrome(string& s, int i = 0) {
		int n = s.size();
		if (i == n/2) {
			return 1;
		}
		if (s[i] != s[n - i - 1]) {
			return false;
		}
		return isPalindrome(s, i + 1);
	}
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// USING RECURSION (Two Pointer Approach)
class Solution {
	public:
	bool isPalindrome(string& s, int l, int r) {
		if (l >= r) {
			return 1;
		}
		if (s[l] != s[r]) {
			return false;
		}
		return isPalindrome(s, l + 1, r - 1);
	}
	
	bool isPalindrome(string& s) {
		return isPalindrome(s, 0, s.size() - 1);
	}
};
// Time Complexity: O(n)
// Space Complexity: O(n)
