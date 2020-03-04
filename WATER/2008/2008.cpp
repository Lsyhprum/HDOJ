# include <iostream>

using namespace std;

int main() {
	int n;
	while (cin >> n && n != 0) {
		double a = 0, b = 0, c = 0, i;
		while (n --) {
			cin >> i;
			if (i < 0) {
				a++;
			}else if (i == 0) {
				b++;
			}else {
				c++;
			}
		}
		cout << a << " " << b << " " << c << endl;
	}
	return 0;
}