// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
// Merge nums1 and nums2 into a single array sorted in non-decreasing order.
// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

// BRUTE FORCE APPROACH (Sorting)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; i++) {
                nums1[i + m] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};
// Time Complexity: O((m + n) log(m + n))
// Space Complexity: O(m + n)

// BETTER SOLUTION (Two Pointer)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
        int i = 0, j = 0;

        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                result.push_back(nums1[i++]);
            } else {
                result.push_back(nums2[j++]);
            }
        }

        while (i < m) {
            result.push_back(nums1[i++]);
        }

        while (j < n) {
            result.push_back(nums2[j++]);
        }
        nums1 = result;
    }
};
// Time Complexity: O(m + n)
// Space Complexity: O(m + n)

// OPTIMAL SOLUTION (Three Pointers)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = m + n - 1;

        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};
// Time Complexity: O(m + n)
// Space Complexity: O(1)
