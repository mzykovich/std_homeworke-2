#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter number: " << endl;
	cin >> a >> b >> c;
	if (a + b > c & a + c > b & b + c > a) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	system("pause");
	return 0;
}
