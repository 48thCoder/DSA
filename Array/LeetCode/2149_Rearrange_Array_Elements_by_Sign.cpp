// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.
// You should return the array of nums such that the array follows the given conditions:
// 1) Every consecutive pair of integers have opposite signs.
// 2) For all integers with the same sign, the order in which they were present in nums is preserved.
// 3) The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

// BRUTE FORCE APPROACH -> TLE
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if ((nums[i] > 0 && i % 2 == 0) || (nums[i] < 0 && i % 2 != 0)) {
                continue;
            }
            int j = i + 1;
            while (j < n && ((nums[j] > 0) == (nums[i] > 0))) {
                j++;
            }
            int temp = nums[j];
            while (j > i) {
                nums[j] = nums[j - 1];
                j--;
            }
            nums[i] = temp;
        }
        return nums;
    }
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// BETTER APPROACH
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos, neg;

        for (int x : nums) {
            if (x > 0) {
                pos.push_back(x);
            } else {
                neg.push_back(x);
            }
        }

        for (int i = 0; 2 * i < n; i++) {
            nums[2 * i] = pos[i];
            nums[2 * i + 1] = neg[i];
        }
        return nums;
    }
};
// Time Complexity: O(n) + O(n/2) ~ O(n)
// Space Complexity: O(n/2) + O(n/2) ~ O(n)

// OPTIMAL SOLUTION
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int pos = 0, neg = 1;
        vector<int> res(n);

        for (int x : nums) {
            if (x > 0) {
                res[pos] = x;
                pos += 2;
            } else {
                res[neg] = x;
                neg += 2;
            }
        }
        return res;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)
