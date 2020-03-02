# include <iostream>

using namespace std;

const int maxn = 50;
 // 反思：相信前面的dp
long long dp[maxn] = {};           // dp[][0] 合法数  dp[][1] 下一次可能不合法

int main(){
    int n;
    dp[1] = 3;
    dp[2] = 8;

    for(int i = 3; i < 40; i ++){
        dp[i] = dp[i-1] * 2 + dp[i-2] * 2;                     // 从结尾考虑
    }

    while(cin >> n){
        cout << dp[n] << "\n";
    }
    return 0;
}