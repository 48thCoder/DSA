// You are given an integer n. Your task is to reverse the digits, ensuring that the reversed number has no leading zeroes.

class Solution {
	public:
	int reverseDigits(int n) {
		int rev = 0;
		while (n > 0) {
			int digit = n % 10;
			rev = (rev * 10) + digit;
			n /= 10;
		}
		return rev;
	}
};

// Time Complexity: O(d), where d is no. of digits ~ O(log10(n))
// Space Complexity: O(1)
