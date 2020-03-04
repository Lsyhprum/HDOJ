# include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	while (num--) {
		int i, sum = 0, temp;
		cin >> i;
		while (i--) {
			cin >> temp;
			sum += temp;
		}
		cout << sum << endl;
	}

	return 0;
}