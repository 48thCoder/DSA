// Given a positive number n, print the string "GFG" exactly n times, separated by a single space.

// USING RECURSION
#include <iostream>
using namespace std;

void printGFG(int n) {
	if (n <= 0) {
		return;
	}
	cout << "GFG ";
	printGFG(n - 1);
}

int main() {
	int n;
	cin>> n;
	printGFG(n);
	return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(n)

// OTHER APPROACHES
// 1) Using 'for' loop:
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>> n;
	for (int i = 0; i < n; i++) {
		cout << "GFG" << " ";
	}
	return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

// 2) Using 'while' loop:
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>> n;
	int i = 0;
	while (i < n) {
		cout << "GFG ";
		i++;
	}
	return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

// 3) Using 'do-while' loop:
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>> n;
	int i = 0;
	do {
		cout << "GFG ";
		i++;
	} while (i < n);
	return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
