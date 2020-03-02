# include <iostream>

using namespace std;

int main() {
	int num, max = 0;
	int prime[10001];  // 0 合数， 1 素数
	for (int i = 0; i < 10000;i++)
		prime[i] = 1;
	while (cin >> num, num != 0) {
		int result = 0;
		for (int i = max;i <= num;i++) {
			for (int j = 2; j <= sqrt(i); j++) {
				if (i % j == 0) {
					prime[i] = 0;
					break;
				}
			}
		}
		max = num;
		for (int i = 2; i < num/2; i++) {
			if (prime[i] && prime[num - i]) 
				result++;
		}
		cout << result << endl;
	}
	return 0;
}

/*
素数大于1
*/