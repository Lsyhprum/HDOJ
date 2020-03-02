# include <iostream>
# include <iomanip>

using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b, a != 0 || b != 0) {
		int left = a % b, j = 0;
		for (int i = left * 100; i < (left + 1) * 100; i++) {
			if (i % b == 0) {
				if (j != 0)
					cout << " ";
				cout << fixed << setw(2) << setfill('0') << i % 100;
				j++;
			}
		}
		cout << "" << endl;
	}
	return 0;
}

/*
设置整数宽度
*/