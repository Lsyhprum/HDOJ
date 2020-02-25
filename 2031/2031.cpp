# include <iostream>
# include <stack>
# include <math.h>

using namespace std;

int main() {
	int a, b;
	stack<char> s;
	char table[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	while (cin >> a >> b) {
		int c = abs(a);
		while (c > b) {
			s.push(table[c % b]);
			c = c / b;
			//cout << c << endl;
		}
		s.push(table[c]);

		if (a < 0)
			cout << "-";
		while (!s.empty()) {
			cout << s.top();
			s.pop();
		}
		cout << "" << endl;
	}
	return 0;
}