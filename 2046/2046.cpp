# include <iostream>

using namespace std;

const int maxn = 51;
long long dp[maxn] = {};      // 防止过大

int main(){
    int n;
    dp[1] = 1;
    dp[2] = 2;
    // 先打表，防止测试集合过大
    for(int i = 3; i <= 50; i ++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    while(cin >> n){
        cout << dp[n] << "\n";
    }
    return 0;
}