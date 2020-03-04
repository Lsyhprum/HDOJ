# include <iostream>

using namespace std;

int main() {
	int i;
	while (cin >> i, i) {
		int sum = 0;
		int temp;
		while (i--) {
			cin >> temp;
			sum += temp;
		}
		cout << sum << endl;
	}
	return 0;
}