// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// BRUTE FORCE APPROACH
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n, 0);

        int index = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                temp[index] = nums[i];
                index++;
            }
        }

        for (int i = 0; i < n; i++) {
            nums[i] = temp[i];
        }
    }
};
// Time Complexity: O(n) + O(x) + O(n - x) ~ O(2n) ~ O(n)
// Space Complexity: O(n)

// OPTIMAL SOLUTION (Two Pointer)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        if (j == -1) {
            return;
        }

        for (int i = j + 1; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
// Time Complexity: O(x) + O(n - x) ~ O(n)
// Space Complexity: O(1)
