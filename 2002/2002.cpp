# include <iostream>
# include <iomanip>
# include <math.h>
# define PI 3.1415927

using namespace std;

int main() {
	double r;
	double result = PI * 4 / 3;
	
	while (cin >> r) 
		cout << fixed << setprecision(3) << result * pow(r, 3) << endl;
	
	return 0;
}

/*
	以下两种方法计算结果不同
	cout << 4 / 3 * PI << endl;
	cout << 4.0f / 3 * PI << endl;
*/