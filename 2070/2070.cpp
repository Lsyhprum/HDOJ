# include <iostream>

using namespace std;

int main() {
	int n, max = 1;
	_int64 fib[50];
	for (int i = 0;i < 50;i++)
		fib[i] = -1;
	fib[0] = 0;
	fib[1] = 1;
	while (cin >> n, n != -1) {
		while (max < n) {
			fib[max + 1] = fib[max] + fib[max - 1];
			max++;
		}
		cout << fib[n] << endl;
	}
	return 0;
}

/*
_int64
*/