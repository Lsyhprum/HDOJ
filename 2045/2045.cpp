# include <iostream>

using namespace std;

const int maxn = 60;
long long dp[maxn];
int pos = 4;

int main(){
    int n;
    dp[1] = 3;
    dp[2] = 6;
    dp[3] = 6;                        // 先建表
    for(int i = 4; i < 51; i ++)
        dp[i] = dp[i-1] + dp[i-2] * 2;

    while(cin >> n){
        cout << dp[n] << "\n";
    }

    return 0;
}