# include <iostream>

using namespace std;

int main() {
	int table[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int y, m, d;
	char a, b;
	while (cin >> y >> a >> m >> b >> d) {
		int result = 0;
		table[2] = y % 400 == 0 || (y % 4 == 0 && y % 100 != 0) ? 29 : 28;
			
		for (int i = m - 1; i > 0; i --) 
			result += table[i];
		cout << result + d << endl;
	}

	return 0;
}
