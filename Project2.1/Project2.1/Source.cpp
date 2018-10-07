#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter number: " << endl;
	cin >> a >> b;
	if (a > b) {
		cout << a << endl;
	}
	else {
		cout << b << endl;
	}
	system("pause");
	return 0;
}