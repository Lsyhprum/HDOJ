# include <iostream>
# include <iomanip>

using namespace std;

int main() {
	int m, n;
	cin >> m;
	while (m--) {
		double result = 0;
		cin >> n;
		for (int i = 1;i <= n;i ++) {
			if (i % 2 == 0)
				result -= (1.0 / i);
			else
				result += (1.0 / i);
		}
		cout << fixed << setprecision(2) << result << endl;
	}

	return 0;
}