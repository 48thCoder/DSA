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
// Time Complexity: O(n) -> Best Case, O(n²) -> Avg. & Worst Case
// Space Complexity: O(1)

// USING RECURSION
void bubbleSort(int arr[], int n) {
    if (n == 1) {
		return;
	}
    int didSwap = 0;
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            didSwap = 1;
        }
    }
    if (didSwap == 0) {
		return;
	}
    bubbleSort(arr, n - 1);
}
// Time Complexity: O(n) -> Best Case, O(n²) -> Avg. & Worst Case
// Space Complexity: O(n)
