# include <iostream>

using namespace std;

int main() {
	char a, b, c, t;
	while (cin >> a >> b >> c) { 

		// 反思：注意交换顺序
		if (a > b) { t = a; a = b; b = t; }
		if (a > c) { t = a; a = c; c = t; }
		if (b > c) { t = b; b = c; c = t; }

		// if (a > b) { a^=b; b^=a; a^=b; }
		// if (a > c) { a^=c; c^=a; a^=c; }
		// if (b > c) { b^=c; c^=b; b^=c; }

		// if (a > b) { a=a+b; b=a-b; a=a-b; }
		// if (a > c) { a=a+c; c=a-c; a=a-c; }
		// if (b > c) { b=b+c; c=b-c; b=b-c; }

		cout << a << " " << b << " " << c << endl;
	}
	return 0;
}