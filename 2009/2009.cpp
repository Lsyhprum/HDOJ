# include <iostream>
# include <iomanip>
# include <math.h>

using namespace std;

int main() {
	double n, m;
	while (cin >> n >> m) {
		double result = n;
		while (-- m) {
			n = sqrt(n);
			result += n;
		}
		cout << fixed << setprecision(2) << result << endl;
	}
	return 0;
}