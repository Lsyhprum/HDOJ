# include <iostream>

using namespace std;

int main(){
    int t, A, B;
    cin >> t;
    while(t --){
        cin >> A >> B;

        A %= 100;
        B %= 100;

        cout << (A + B) % 100 << endl;
    }
    return 0;
}