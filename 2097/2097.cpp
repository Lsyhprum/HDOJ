# include <iostream>

using namespace std;

int main() {
	int num, g, s, b, q;
	while (cin >> num, num != 0) {
		g = num % 10;
		s = (num / 10) % 10;
		b = (num / 100) % 10;
		q = num / 1000;
		int sky = g + s + b + q;
		
		int sky1 = 0;
		int t1 = num;
		while (t1 > 16) {
			sky1 += t1 % 16;
			t1 = t1 / 16;
		}
		sky1 += t1;

		int sky2 = 0;
		int t2 = num;
		while (t2 > 12) {
			sky2 += t2 % 12;
			t2 = t2 / 12;
		}
		sky2 += t2;

		if (sky == sky1 && sky == sky2) {
			cout << num << " is a Sky Number." << endl;
		}else {
			cout << num << " is not a Sky Number." << endl;
		}


	}
	return 0;
}

/*
分解数简单方法
*/