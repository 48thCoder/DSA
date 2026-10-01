// You are given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

// BRUTE FORCE APPROACH -> Prohibited
class Solution {
public:
    void sortColors(vector<int>& nums) { 
      sort(nums.begin(), nums.end()); 
    }
};
// Time Complexity: O(n log n)
// Space Complexity: O(1) or O(n)

// BETTER APPROACH
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count = 0, count1 = 0, count2 = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                count++;
            } else if (nums[i] == 1) {
                count1++;
            } else {
                count2++;
            }
        }

        for (int i = 0; i < count; i++) {
            nums[i] = 0;
        }

        for (int i = count; i < count + count1; i++) {
            nums[i] = 1;
        }

        for (int i = count + count1; i < n; i++) {
            nums[i] = 2;
        }
    }
};
// Time Complexity: O(n + n) ~ O(2n) ~ O(n)
// Space Complexity: O(1)

// OPTIMAL SOLUTION (Dutch National Flag Algo)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
