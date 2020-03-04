# include <iostream>
# include <algorithm>
# include <math.h>

using namespace std;

const int maxn = 110;
int val[maxn];

bool cmp(int A, int B){
    return abs(A) > abs(B);
}

int main(){
    int n;
    while(cin >> n, n){
        for(int i = 0; i < n; i ++){
            cin >> val[i];
        }
        sort(val, val + n, cmp);
        for(int i = 0; i < n; i ++){
            if(i != 0)
                cout << " ";
            cout << val[i];
        }
        cout << endl;
    }
    return 0;
}