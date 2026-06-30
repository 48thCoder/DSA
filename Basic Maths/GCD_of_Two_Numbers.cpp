// You are given two integers n1 and n2. You need to find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.

// BRUTE FORCE APPROACH
class Solution {
public:
    int GCD(int n1,int n2) {
        int gcd = 1;
        for(int i = 1; i <= min(n1, n2); i++) {
            if(n1 % i == 0 && n2 % i == 0){
                gcd = i;
            }
        }
        return gcd;
    }
};
// Time Complexity: O(min(n1, n2)) 
// Space Complexity: O(1)

// BETTER APPROACH
class Solution {
public:
    int GCD(int n1,int n2) {
        int gcd = 1;
        for(int i = min(n1, n2); i >= 1; i--) {
            if(n1 % i == 0 && n2 % i == 0){
                gcd = i;
                break;
            }
        }
        return gcd;
    }
};
// Time Complexity: O(min(n1, n2)) 
// Space Complexity: O(1)

// OPTIMAL SOLUTION (Euclidean Algorithm - Iterative)
class Solution {
public:
    int GCD(int n1,int n2) {
        while(n1 > 0 && n2 > 0) {
            if(n1 > n2) {
                n1 %= n2;
            }
            else {
                n2 %= n1;
            }
        }
        return n1 == 0 ? n2 : n1;
    }
};
// Time Complexity: O(log(min(n1, n2)))
// Space Complexity: O(1)
