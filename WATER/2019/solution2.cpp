# include <iostream>
# include <algorithm>

using namespace std;

const int maxn = 110;
int val[maxn];

int main(){
    int n, m;

    while(cin >> n >> m, n != 0 || m != 0){
        val[0] = m;
        for(int i = 1; i <= n; i ++){
            cin >> val[i];
        }
        sort(val, val + n + 1);
        for(int i = 0; i <= n; i ++){
            if(i != 0)
                cout << " ";
            cout << val[i];
        }
        cout << endl;
    }
    return 0;
}