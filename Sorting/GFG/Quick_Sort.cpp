// Given an array arr[], with starting index low and ending index high, complete the functions partition() and quickSort() so that the array becomes sorted in ascending order.

// LOMUTO PARTITION SCHEME
class Solution {
	public:
	void quickSort(vector<int>& arr, int low, int high) {
		if (low < high) {
			int pivotIndex = partition(arr, low, high);
			quickSort(arr, low, pivotIndex - 1);
			quickSort(arr, pivotIndex + 1, high);
		}
	}
	
	int partition(vector<int>& arr, int low, int high) {
		int pivot = arr[high];
		int i = low - 1;
		for (int j = low; j < high; j++) {
			if (arr[j] < pivot) {
				i++;
				swap(arr[i], arr[j]);
			}
		}
		swap(arr[i + 1], arr[high]);
		return i + 1;
	}
};
// Time Complexity: O(n log n) -> Best & Avg. Case, O(n²) -> Worst Case
// Space Complexity: O(log n) -> Best & Avg. Case, O(n) -> Worst Case

// HOARE'S ORIGINAL SCHEME
class Solution {
	public:
	void quickSort(vector<int>& arr, int low, int high) {
		if (low < high) {
			int pivotIndex = partition(arr, low, high);
			quickSort(arr, low, pivotIndex - 1);
			quickSort(arr, pivotIndex + 1, high);
		}
	}
	
	int partition(vector<int>& arr, int low, int high) {
		int pivot = arr[low];
		int i = low;
		int j = high;
		while (i < j) {
			while (arr[i] <= pivot && i <= high - 1) {
				i++;
			}
			while (arr[j] > pivot && j >= low + 1) {
				j--;
			}
			if (i < j) {
				swap(arr[i], arr[j]);
			}
		}
		swap(arr[low], arr[j]);
		return j;
	}
};
// Time Complexity: O(n log n) -> Best & Avg. Case, O(n²) -> Worst Case
// Space Complexity: O(log n) -> Best & Avg. Case, O(n) -> Worst Case
