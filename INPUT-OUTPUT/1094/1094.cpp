# include <iostream>

using namespace std;

int main() {
	int N;
	while (cin >> N) {
		int sum = 0, temp;
		while (N --) {
			cin >> temp;
			sum += temp;
		}
		cout << sum << endl;
	}
	return 0;
}