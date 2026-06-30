// Print numbers from n to 1 (space separated) without the help of loops.

// USING RECURSION
class Solution {
	public:
	void printNos(int n) {
		if (n < 1) {
			return;
		}
		cout << n << " ";
		printNos(n - 1);
	}
};
// Time Complexity: O(n)
// Space Complexity: O(n)
