// Given an array arr, use selection sort to sort arr[] in increasing order.

class Solution {
	public:
	void selectionSort(vector<int> &arr) {
		int n = arr.size();
		for (int i = 0; i < n - 1; i++) {
			int min = i;
			for (int j = i + 1; j < n; j++) {
				if (arr[j] < arr[min]) {
					min = j;
				}
			}
			swap(arr[i], arr[min]);
		}
	}
};

// Time Complexity: O(n²)
// Space Complexity: O(1)
