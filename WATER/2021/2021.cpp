# include <iostream>

using namespace std;

int main(){
    int val[6] = {100, 50, 10, 5, 2, 1};

    int n;

    while(cin >> n, n){
        int sum = 0, tmp;
        for(int i = 0 ;i < n; i ++){
            cin >> tmp;
            for(int j = 0; tmp > 0 &&j < 6; j ++){
                sum += (tmp / val[j]);
                tmp %= val[j];
            }
        }
        cout << sum << endl;
    }
    return 0;
}