# include <iostream>

using namespace std;

const int maxn = 21;        // 最大长比 题设大 1-10
long long dp[maxn];         // dp 数组设为 long long

int main(){
    int n, num;

    dp[1] = 0;               // dp 预设值
    dp[2] = 1;
    dp[3] = 2;
    for(int i = 4; i <= 20; i ++){
        dp[i] = dp[i - 1] * (i-1);
    }

    cin >> num;

    while(num --){
        cin >> n;
        long long all = 1;
        for(int i = 1; i <= n; i ++)
            all *= i;
        printf("%.2f%\%\n", dp[n] * 1.0f * 100 / all);
    }

    return 0;
}