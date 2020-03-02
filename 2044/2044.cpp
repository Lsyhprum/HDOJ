# include <iostream>
# include <cstring>

using namespace std;

const int maxn = 60;
long long dp[maxn] = {};
int pos = 3;

long long fun(int a){
    if(a > pos){
        for(int i = pos + 1 ; i <= a; i ++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        pos = a;
    }
    return dp[a];
}

int main(){
    int n, a, b;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 2;

    cin >> n;
    while(n --){
        cin >> a >> b;
        cout << fun(b - a + 1) << "\n";
    }
    return 0;
}