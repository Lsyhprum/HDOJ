# include <iostream>

using namespace std;

int main() {
	int grade;
	while (cin >> grade) {
		if (grade > 100 || grade < 0) {
			cout << "Score is error!" << endl;
		} else if (grade < 60) {
			cout << "E" << endl;
		} else if (grade < 70) {
			cout << "D" << endl;
		} else if (grade < 80) {
			cout << "C" << endl;
		} else if (grade < 90) {
			cout << "B" << endl;
		} else {
			cout << "A" << endl;
		}
	}
	return 0;
}