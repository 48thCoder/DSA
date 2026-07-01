// Write a function that reverses a string. The input string is given as an array of characters s. You must do this by modifying the input array in-place with O(1) extra memory.

// ITERATIVE APPROACH
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (i == n / 2) {
                return;
            }
            swap(s[i], s[n - i - 1]);
        }
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// USING BUILT-IN FUNCTION
#include <bits/stdc++.h>

class Solution {
public:
    void reverseString(vector<char>& s) {
        std::reverse(s.begin(), s.end());
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// TWO POINTER APPROACH
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
