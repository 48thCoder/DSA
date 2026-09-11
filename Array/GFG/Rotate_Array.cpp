// Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.
// Note: Consider the array as circular.

// BRUTE FORCE APPROACH
class Solution {
	public:
	void rotateArr(vector<int>& arr, int d) {
		int n = arr.size();
		d %= n;
		int temp[d];
		
		for (int i = 0; i < d; i++) {
			temp[i] = arr[i];
		}
		
		for (int i = d; i < n; i++) {
			arr[i - d] = arr[i];
		}
		
		for (int i = 0; i < d; i++) {
			arr[n - d + i] = temp[i];
		}
	}
};
// Time Complexity: O(d) + O(n - d) + O(d) ~ O(n + d) ~ O(n)
// Space Complexity: O(d)

// OPTIMAL SOLUTION
class Solution {
	public:
	void rotateArr(vector<int>& arr, int d) {
		int n = arr.size();
		d %= n;
		reverse(arr.begin(), arr.begin() + d);
		reverse(arr.begin() + d, arr.end());
		reverse(arr.begin(), arr.end());
	}
};
// Time Complexity: O(n) + O(n - d) + O(d) ~ O(2n) ~ O(n)
// Space Complexity: O(1)
