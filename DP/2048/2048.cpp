# include <iostream>
# include <math.h>

using namespace std;

const int maxn = 30;
long long dp[maxn];

int main(){
    int n, num;

    dp[1] = 0;               // dp 预设值
    dp[2] = 1;
    dp[3] = 2;
    for(int i = 4; i <= 20; i ++){
        dp[i] = (i-1) * (dp[i - 1] + dp[i-2]);
    }

    cin >> num;

    while(num --){
        cin >> n;
        long long all = 1;
        for(int i = 1; i <= n; i ++)
            all *= i;

        printf("%.2f%\%\n", dp[n] * 100.0f / all);
    }

    return 0;
}