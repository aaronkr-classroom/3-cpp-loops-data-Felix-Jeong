// Chp2 Ex5.cpp
#include <iostream>
#include <string>

using std::cin; using std::cout;
using std::endl; using std::string;

int main() {
	//square
	for (int r = 0; r <= 4; ++r) {
		int c = 0;
		while (c <= 4) {
			cout << "*";
			c++;
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;

	//rectangle
	for (int rr = 0; rr <= 4; ++rr) {
		int cc = 0;
		while (cc <= 2) {
			cout << "*";
			cc++;
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;

	//triangle
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * 5) - 1 - (i * 2); j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
} 