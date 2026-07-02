// You are given a string s, the task is to reverse the string using stack.

// IMPLEMENTATION USING STACK
?? Pending ??
// Time Complexity: O(n)
// Space Complexity: O(n)

// OTHER APPROACHES
// 1) Iterative Method:
class Solution {
	public:
	string reverse(string& S) {
		int n = S.size();
		for (int i = 0; i < n; i++) {
			if (i == n/2) {
				break;
			}
			swap(S[i], S[n - i - 1]);
		}
		return S;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// 2) String Reversal Method:
class Solution {
	public:
	string reverse(string& S) {
		string result(S.rbegin(), S.rend());
		return result;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// 3) Using Built-in Function:
#include <bits/stdc++.h>

class Solution {
	public:
	string reverse(string& S) {
		std::reverse(S.begin(), S.end());
		return S;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// 4) Two Pointer Approach:
class Solution {
	public:
	string reverse(string& S) {
		int l = 0, r = S.size() - 1;
		while (l < r) {
			swap(S[l], S[r]);
			l++;
			r--;
		}
		return S;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// 5) Using Recursion:
class Solution {
	public:
	void reverseStr(string& S, int i, int n) {
		if (i == n/2) {
			return;
		}
		swap(S[i], S[n - i - 1]);
		reverseStr(S, i + 1, n);
	}
	
	string reverse(string& S) {
		reverseStr(S, 0, S.size());
		return S;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// 6) Using Recursion (Two Pointers)
class Solution {
	public:
	void reverseStr(string& S, int l, int r) {
		if (l >= r) {
			return;
		}
		swap(S[l], S[r]);
		reverseStr(S, l + 1, r - 1);
	}
	
	string reverse(string& S) {
		reverseStr(S, 0, S.size() - 1);
		return S;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(n)
