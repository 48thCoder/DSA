// Given an array of integers called nums, sort the array in non-decreasing order using the insertion sort algorithm and return the sorted array.

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i = 1; i < n; i++) {
            int j = i;
            while(j > 0 && nums[j] < nums[j - 1]) {
                swap(nums[j], nums[j - 1]);
                j--;
            }
        }
        return nums;
    }
};

// Time Complexity: O(n) -> Best Case, O(n²) -> Avg. & Worst Case
// Space Complexity: O(1)
