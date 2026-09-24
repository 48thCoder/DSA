// Given an array arr[] containing integers and an integer k, your task is to find the length of the longest subarray where the sum of its elements is equal to the given value k. If there is no subarray with sum equal to k, return 0.

// BRUTE FORCE APPROACH -> TLE
class Solution {
	public:
	int longestSubarray(vector<int>& arr, int k) {
		int n = arr.size();
		int len = 0;
		for (int i = 0; i < n; i++) {
			long long sum = 0;
			for (int j = i; j < n; j++) {
				sum += arr[j];
				if (sum == k) {
					len = max(len, j - i + 1);
				}
			}
			
		}
		return len;
	}
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// OPTIMAL SOLUTION (Using Hash Map)
class Solution {
	public:
	int longestSubarray(vector<int>& arr, int k) {
		int n = arr.size();
		map<int, int> mp;
		long long sum = 0;
		int maxLen = 0;
		
		for (int i = 0; i < n; i++) {
			sum += arr[i];
			if (sum == k) {
				maxLen = max(maxLen, i + 1);
			}
			
			int rem = sum - k;
			if (mp.find(rem) != mp.end()) {
				int len = i - mp[rem];
				maxLen = max(maxLen, len);
			}
			
			if (mp.find(sum) == mp.end()) {
				mp[sum] = i;
			}
		}
		return maxLen;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(n)

// TWO POINTER APPROACH (Only for +ve values)
class Solution {
	public:
	int longestSubarray(vector<int>& arr, int k) {
		int n = arr.size();
		int left = 0, right = 0, len = 0;
		long long sum = 0;
		
		while (right < n) {
			sum += arr[right];
			
			while (left <= right && sum > k) {
				sum -= arr[left];
				left++;
				
			}
			
			if (sum == k) {
				len = max(len, right - left + 1);
			}
			right++;
		}
		return len;
	}
};
// Time Complexity: O(n) + O(n) ~ O(2n) ~ O(n)
// Space Complexity: O(1)
