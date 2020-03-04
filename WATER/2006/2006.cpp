# include <iostream>

using namespace std;

int main() {
	int num;
	while (cin >> num) {
		int i, result = 1;
		while (num --) {
			cin >> i;
			if (i % 2 != 0)
				result *= i;
		}
		cout << result << endl;
	}
	
	return 0;
}