// Given a string s, return true if it is a palindrome, or false otherwise.
// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// BRUTE FORCE APPROACH
class Solution {
public:
    bool isPalindrome(string s) {
        string copy = "";
        for (char c : s) {
            if (isalnum(c)) {
                copy += tolower(c);
            }
        }
        int n = copy.size();
        for (int i = 0; i < n; i++) {
            if (copy[i] != copy[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// STRING REVERSAL
class Solution {
public:
    bool isPalindrome(string s) {
        string copy = "";
        for (char c : s) {
            if (isalnum(c)) {
                copy += tolower(c);
            }
        }
        return copy == string(copy.rbegin(), copy.rend());
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// USING TWO POINTERS
class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            while (l < r && !isalnum(s[l])) {
                l++;
            }
            while (l < r && !isalnum(s[r])) {
                r--;
            }
            if (tolower(s[l]) != tolower(s[r])) {
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
