# include <iostream>
# include <math.h>

using namespace std;

int main() {
	int m, n;
	while (cin >> m >> n) {
		int a = 0, b = 0, tmp;
		if (m > n) {
			tmp = m;
			m = n;
			n = tmp;
		}
		for (int i = m; i <= n;i++) {
			if (i & 1)
				b += pow(i, 3);
			else 
				a += pow(i, 2);
		}
		cout << a << " " << b << endl;
	}
	return 0;
}