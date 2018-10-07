#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter number: " << endl;
	cin >> a >> b >> c;
	if ( a== b & a == c & b == c){
		cout << "3" << endl;
	}
	else {
		if (a == b | a == c | b == c) {
			cout << "2" << endl;
		}
		else {
			cout << "0" << endl;
		}
	}

	system("pause");
	return 0;
}
