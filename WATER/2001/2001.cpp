# include <iostream>
# include <iomanip>
# include <math.h>

using namespace std;

int main() {
	float a, b, c, d;
	printf("%-8d\n", 1000);
	printf("%04f", 3.1);
	while (cin >> a >> b >> c >> d) {
		float result = sqrt(pow(abs(c - a), 2) + pow(abs(d - b), 2));
		//cout << fixed << setprecision(2) << result << endl;
		printf("%.2f\n", result);
	}
	return 0;
}