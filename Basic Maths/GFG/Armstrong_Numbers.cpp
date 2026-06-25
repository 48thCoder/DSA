// You are given a 3-digit number n, Find whether it is an Armstrong number or not.

class Solution {
	public:
	bool armstrongNumber(int n) {
		int num = n;
		int sum = 0;
		while (n > 0) {
			int digit = n % 10;
			sum += (digit * digit * digit);
			n /= 10;
		}
		return sum == num;
	}
};

// Time Complexity: O(d), where d -> No. of digits ~ O(log10(n))
// Space Complexity: O(1)
