#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter number: " << endl;
	cin >> a >> b;
	if (a >= b) {
		if (a > b) {
			cout << "1" << endl;
		}
		else {
			cout <<"0"<<endl;
		}
	}
	else {
		cout << "2" << endl;
	}
	system("pause");
	return 0;
}