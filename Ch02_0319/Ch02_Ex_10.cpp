#include <iostream>
#include <string>
using namespace std;

int main() { // ������
	string str;
	cout << "���ڿ��� �Է�>>";
	// getline(cin, str);
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j <= i; j++) {
			cout << str[j];
		}
		cout << endl;
	}

	return 0;
}