// Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.

class Solution {
public:
    int evenlyDivides(int n) {
        int num = n;
        int count = 0;

        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 && n % digit == 0) {
                count++;
            }
            num /= 10;
        }

        return count;
    }
};

// Time Complexity: O(d) where, d is the no. of digits ~ O(log10(n))
// Space Complexity: O(1)
