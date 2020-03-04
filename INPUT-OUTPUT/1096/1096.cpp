# include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	while (N--) {
		int M, sum = 0, temp;
		cin >> M;
		while (M--) {
			cin >> temp;
			sum += temp;
		}
		cout << sum << endl;

		if(N != 0)
		    cout << "" << endl;
	}
	return 0;
}