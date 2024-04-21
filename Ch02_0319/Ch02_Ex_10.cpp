#include <iostream>
#include <string>
using namespace std;

int main() { // 김종현
	string str;
	cout << "문자열을 입력>>";
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