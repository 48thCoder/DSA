// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

// BRUTE FORCE APPROACH
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int flag = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == i) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                return i;
            }
        }
        return n;
    }
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// BETTER APPROACH (Hashing)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n + 1, 0);

        for (int x : nums) {
            hash[x] = 1;
        }

        for (int i = 0; i < n; i++) {
            if (hash[i] == 0) {
                return i;
            }
        }
        return n;
    }
};
// Time Complexity: O(n) + O(n) ~ O(2n) ~ O(n)
// Space Complexity: O(n)

// USING SORT FUNCTION
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if (nums[i] != i) {
                return i;
            }
        }
        return n;
    }
};
// Time Complexity: O(n log n) + O(n) ~ O(n log n)
// Space Complexity: O(n)

// USING MATHEMATICAL FORMULA
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int total = n * (n + 1) / 2;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        return total - sum;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// USING CYCLIC SORT
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while (i < n) {
            int j = nums[i];
            if (j < n && nums[i] != nums[j]) {
                swap(nums[i], nums[j]);
            } else {
                i++;
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) {
                return i;
            }
        }
        return n;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)

// OPTIMAL SOLUTION (Bit Manipulation)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int x = n;

        for (int i = 0; i < n; i++) {
            x ^= i ^ nums[i];
        }
        return x;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
