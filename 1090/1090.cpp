# include <iostream>

using namespace std;

int main() {
	int len = 0;
	cin >> len;
	
	int a, b;
	while (len--) {
		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;
}