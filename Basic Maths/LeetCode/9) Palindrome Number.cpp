// Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long long rev = 0;
        while (x > 0) {
            int digit = x % 10;
            rev = (rev * 10) + digit;
            x /= 10;
        }
        return rev == num;
    }
};

// Time Complexity: O(x), where x -> no. of elements ~ O(log10(n))
// Space Complexity: O(1)
