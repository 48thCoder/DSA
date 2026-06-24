// Given an integer n, print each of its digits starting from the last digit and moving towards the first digit. Separate the digits with a space.

class Solution {
public:
    void extractDigits(int n) {
        n = abs(n);

        if (n == 0) {
            cout << 0;
            return;
        }

        while (n > 0) {
            cout << n % 10 << " ";
            n /= 10;
        }
    }
};

// Time Complexity: O(d) where, d is the no. of digits
// Space Complexity: O(1)
