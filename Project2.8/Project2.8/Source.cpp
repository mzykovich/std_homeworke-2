#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter number:" << endl;
	cin >> n;
	int a = n / 1000;
	int b = n / 100 % 10;
	int c = n % 10;
	int d = n % 100 / 10;
	if (a == c & b == d) {
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
	}

	system("pause");
	return 0;
}