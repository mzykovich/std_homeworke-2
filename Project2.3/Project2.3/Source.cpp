#include <iostream>
using namespace std;

int main()
{
	int a, b, c, m;
	cout << "Enter number: " << endl;
	cin >> a >> b >> c;
	if (a > b) {
		m = a;
	}
	else {
		m = b;
	}
	if (m < c) {
		m = c;
		cout << m << endl;
	}
	else {
		cout << m << endl;
	}
	system("pause");
	return 0;
}