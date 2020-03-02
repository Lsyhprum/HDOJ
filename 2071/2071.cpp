# include <iostream>
# include <iomanip>

using namespace std;

int main() {
	int num;
	cin >> num;

	while (num--) {
		int a;
		double temp, max = -1.0;
		cin >> a;
		while (a--) {
			cin >> temp;
			if (temp > max)
				max = temp;
		}
		cout << fixed << setprecision(2) << max << endl;
	}
	return 0;
}