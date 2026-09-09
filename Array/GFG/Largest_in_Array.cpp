// Given an array arr[]. The task is to find the largest element and return it.

// BRUTE FORCE APPROACH
class Solution {
	public:
	int largest(vector<int> &arr) {
		int n = arr.size();
		sort(arr.begin(), arr.end());
		return arr[n - 1];
	}
};
// Time Complexity: O(n log n)
// Space Complexity: O(1)

// OPTIMAL SOLUTION
class Solution {
	public:
	int largest(vector<int> &arr) {
		int n = arr.size();
		int largest = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] > largest) {
				largest = arr[i];
			}
		}
		return largest;
	}
};
// Time Complexity: O(n)
// Space Complexity: O(1)
