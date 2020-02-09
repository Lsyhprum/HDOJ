# include <iostream>
# include <iomanip>
# include <math.h>

using namespace std;

int main() {
	float a, b, c, d;
	while (cin >> a >> b >> c >> d) {
		float result = sqrt(pow(abs(c - a), 2) + pow(abs(d - b), 2));
		cout << fixed << setprecision(2) << result << endl;
	}
	return 0;
}