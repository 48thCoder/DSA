// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
// There may be duplicates in the original array.
// Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

 // BRUTE FORCE APPROACH
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int result[n];
        int x = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                x = i;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            result[i] = nums[(i + x) % n];
        }
        for (int i = 1; i < n; i++) {
            if (result[i] >= result[i - 1]) {
            } else {
                return false;
            }
        }
        return true;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// OPTIMAL SOLUTION
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int pos = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                pos++;
                if (pos > 1) {
                    return false;
                }
            }
        }
        return true;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
