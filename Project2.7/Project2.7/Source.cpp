#include <iostream>
using namespace std;

int main()
{
	int v, t;
	cout << "Enter number: " << endl;
	cin >> v >> t;
	if (v > 0) {
		cout << v * t % 109 << endl;
	}
	else {
		cout << 109 + v * t % 109 << endl;
	}
	system("pause");
	return 0;
}