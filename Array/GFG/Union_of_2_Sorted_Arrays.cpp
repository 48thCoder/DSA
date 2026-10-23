// Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order. Union of two arrays can be defined as the set containing distinct elements that are present in either of the arrays.

class Solution {
	public:
	vector<int> findUnion(vector<int> &a, vector<int> &b) {
		int i = 0, j = 0, m = a.size(), n = b.size();
		vector<int> result;
		unordered_set<int> seen;
		
		while (i < m && j < n) {
			if (a[i] <= b[j]) {
				if (seen.insert(a[i]).second) {
					result.push_back(a[i]);
				}
				i++;
			} else {
				if (seen.insert(b[j]).second) {
					result.push_back(b[j]);
				}
				j++;
			}
		}
		
		while (i < m) {
			if (seen.insert(a[i]).second) {
				result.push_back(a[i]);
			}
			i++;
		}
		
		while (j < n) {
			if (seen.insert(b[j]).second) {
				result.push_back(b[j]);
			}
			j++;
		}
		return result;
	}
};

// Time Complexity: O(m + n)
// Space Complexity: O(m + n)
