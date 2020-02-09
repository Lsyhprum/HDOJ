# include <iostream>
# include <math.h>

using namespace std;

int main() {
	int m, n;
	while (cin >> m >> n) {
		int a = 0, b = 0, tmp;
		if (m > n) {
			tmp = m;
			m = n;
			n = tmp;
		}
		for (int i = m; i <= n;i++) {
			if (i & 1)
				b += pow(i, 3);
			else 
				a += pow(i, 2);
		}
		cout << a << " " << b << endl;
	}
	return 0;
}

/*
	1. m , n 大小顺序不一定
	2. 位运算判断奇偶数更好
		i & 1 = 1 奇数
		i & 1 = 0 偶数
	3. int 32 bit
*/