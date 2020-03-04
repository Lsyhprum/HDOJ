# include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	while (num--) {
		double a, b, c;
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}