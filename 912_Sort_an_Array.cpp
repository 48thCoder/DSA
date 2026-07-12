// Given an array of integers nums, sort the array in ascending order and return it.
// You must solve the problem without using any built-in functions in O(n log(n)) time complexity and with the smallest space complexity possible.

// USING MERGE SORT
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }

    void mergeSort(vector<int>& nums, int l, int r) {
        if (l >= r) {
            return;
        }
        int mid = (l + r) / 2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);
        merge(nums, l, mid, r);
    }

    void merge(vector<int>& nums, int l, int mid, int r) {
        vector<int> result;
        int left = l;
        int right = mid + 1;

        while (left <= mid && right <= r) {
            if (nums[left] <= nums[right]) {
                result.push_back(nums[left]);
                left++;
            } else {
                result.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            result.push_back(nums[left]);
            left++;
        }

        while (right <= r) {
            result.push_back(nums[right]);
            right++;
        }

        for (int i = l; i <= r; i++) {
            nums[i] = result[i - l];
        }
    }
};
// Time Complexity: O(n log n)
// Space Complexity: O(n)

// USING QUICK SORT (Lomuto Partition Scheme) -> TLE
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }

    void quickSort(vector<int>& nums, int low, int high) {
        if (low < high) {
            int pivotIndex = partition(nums, low, high);
            quickSort(nums, low, pivotIndex - 1);
            quickSort(nums, pivotIndex + 1, high);
        }
    }

    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (nums[j] < pivot) {
                i++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i + 1], nums[high]);
        return i + 1;
    }
};
// Time Complexity: O(n log n) -> Best & Avg. Case, O(n²) -> Worst Case
// Space Complexity: O(log n) -> Best & Avg. Case, O(n) -> Worst Case

// USING QUICK SORT (Hoare's Original Scheme)
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }

    void quickSort(vector<int>& nums, int low, int high) {
        if (low < high) {
            int pivotIndex = partition(nums, low, high);
            quickSort(nums, low, pivotIndex - 1);
            quickSort(nums, pivotIndex + 1, high);
        }
    }

    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[low];
        int i = low;
        int j = high;
        while (i < j) {
            while (nums[i] <= pivot && i <= high - 1) {
                i++;
            }
            while (nums[j] > pivot && j >= low + 1) {
                j--;
            }
            if (i < j) {
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[low], nums[j]);
        return j;
    }
};
// Time Complexity: O(n log n) -> Best & Avg. Case, O(n²) -> Worst Case
// Space Complexity: O(log n) -> Best & Avg. Case, O(n) -> Worst Case

// USING HEAP SORT
?? PENDING ??
// Time Complexity: O(n log n)
// Space Complexity: O(1)
