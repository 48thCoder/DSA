// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range, then return 0.

class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        while (x != 0) {
            int digit = x % 10;
            rev = (rev * 10) + digit;
            x /= 10;
        }
        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }
        return (int)rev;
    }
};

// Time Complexity: O(d) where, d is no. of digits ~ O(log10(n))
// Space Complexity: O(1)
