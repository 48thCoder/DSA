// You are given an integer n. Return the value of n! or n factorial.

// BRUTE FORCE APPROACH
class Solution {
public:
    int factorial(int n) {
        int fact = 1;
        for(int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// USING RECURSION
class Solution {
public:
    int factorial(int n) {
        if(n <= 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)
