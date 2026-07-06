// Given an array, arr[]. Sort the array using bubble sort algorithm.

// BRUTE FORCE APPROACH
class Solution {
	public:
	void bubbleSort(vector<int>& arr) {
		int n = arr.size();
		for (int i = n - 1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (arr[j] > arr[j + 1]) {
					swap(arr[j], arr[j + 1]);
				}
			}
		}
	}
};
// Time Complexity: O(n²)
// Space Complexity: O(1)

// OPTIMAL SOLUTION (Sorted Array)
class Solution {
	public:
	void bubbleSort(vector<int>& arr) {
		int n = arr.size();
		for (int i = n - 1; i > 0; i--) {
			bool swapped = false;
			for (int j = 0; j < i; j++) {
				if (arr[j] > arr[j + 1]) {
					swap(arr[j], arr[j + 1]);
					swapped = true;
				}
			}
			if (!swapped) {
				break;
			}
		}
	}
};
// Time Complexity: O(n) -> For Best Case
// Space Complexity: O(1)
