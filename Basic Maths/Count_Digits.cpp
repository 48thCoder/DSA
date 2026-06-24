// Given a non-negative integer n, return the total number of digits present in n.

// BRUTE FORCE APPROACH
class Solution {
public:
    int countDigit(int n) {
        int count = 0;
        if(n == 0) {
            return 1;
        }
        while(n > 0) {
            count++;
            n /= 10;
        }
        return count;
    }
};
// Time Complexity: O(d) where, d is the no. of digits ~ O(log10(n)) due to n /= 10
// Space Complexity: O(1)

// OPTIMAL SOLUTION
class Solution {
public:
    int countDigit(int n) {
        if (n == 0) {
            return 1;
        }

        return (int)(log10(n) + 1);
    }
};
// Time Complexity: O(1)
// Space Complexity: O(1)
