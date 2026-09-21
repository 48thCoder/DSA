// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

// BRUTE FORCE APPROACH
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }

            if (count == 1) {
                return nums[i];
            }
        }
        return -1;
    }
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// BETTER APPROACH (Sorting)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
            i++;
        }
        return nums[n - 1];
    }
};
// Time Complexity: O(n log n) + O(n) ~ O(n log n)
// Space Complexity: O(1)
