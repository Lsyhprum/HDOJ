# include <iostream>
# include <iomanip>
# include <math.h>

using namespace std;

int main() {
	double a;
	while (cin >> a) 
		cout << fixed << setprecision(2) << abs(a) << endl;
	
	return 0;
}