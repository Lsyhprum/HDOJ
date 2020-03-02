# include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	int ah, am, as, bh, bm, bs, ch, cm, cs;
	while (cin >> ah >> am >> as >> bh >> bm >> bs) {
		int ts = as + bs;
		cs = ts % 60;
		int tm = (am + bm + ts / 60);
		cm = tm % 60;
		ch = ah + bh + tm / 60;
		cout << ch << " " << cm << " " << cs << endl;
	}
	return 0;
}