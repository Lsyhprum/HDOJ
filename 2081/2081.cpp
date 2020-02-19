# include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	string s;
	while (num--) {
		cin >> s;
		cout << "6" + s.substr(6, 11) << endl;
	}
	
	return 0;
}
