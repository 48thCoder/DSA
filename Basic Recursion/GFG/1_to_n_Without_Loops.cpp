// Given a positive integer n, print numbers from 1 to n without using loops. Implement the function printTillN() to print the numbers from 1 to n as space-separated integers.

// USING RECURSION
class Solution {
	public:
	void printTillN(int n) {
		if (n < 1) {
			return;
		}
		printTillN(n - 1);
		cout << n << " ";
	}
};
// Time Complexity: O(n)
// Space Complexity: O(n)
