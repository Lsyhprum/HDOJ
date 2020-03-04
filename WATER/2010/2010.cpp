# include <iostream>
# include <math.h>

using namespace std;

int main() {
	int m, n;
	while (cin >> m >> n) {
		int num = 0, g, s, b;
		for (int i = m; i <= n; i ++) {
			g = i % 10;
			s = (i / 10) % 10;
			b = i / 100;
			if (pow(g, 3) + pow(s, 3) + pow(b, 3) == i) {
				if (num != 0)
					cout << " ";
				cout << i;
				num ++;
			}
		}
		if (num == 0)
			cout << "no";
		cout << "" << endl;
	}
	return 0;
}