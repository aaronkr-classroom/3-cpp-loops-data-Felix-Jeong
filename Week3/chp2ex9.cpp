// Chp2 Ex9.cpp
#include <iostream>
#include <string>

using std::cin; using std::cout;
using std::endl; using std::string;

int main() {

	int a, b;
	cout << "Type two number";
	cout << endl;
	cin >> a >> b;

	if (a > b) {
		cout << endl;
		cout << "Large number is " << a;
	}
	else if (a == b) {
		cout << endl;
		cout << "same";
	}
	else {
		cout << endl;
		cout << "Large number is " << b;
	}

	return 0;
}