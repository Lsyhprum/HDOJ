# include <iostream>

using namespace std;

const int maxn = 65;
long long dp[maxn];

// 动态规划

int main(){
    int n;
    
    for(int i = 1; i < 55; i ++){
        if(i <= 4) 
            dp[i] = i;
        else
            dp[i] = dp[i-1] + dp[i-3];
    }
    
    while(cin >> n, n)
       cout << dp[n] << "\n";
    
    return 0;
}