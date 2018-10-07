#include <iostream>
using namespace std;

int main() {
	int a1, a2, b1, b2;
	cout << "Enter number:" << endl;
	cin >> a1 >> a2 >> b1 >> b2;
	if (a1 == a2 | b1 == b2) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}


	system("pause");
	return 0;
}