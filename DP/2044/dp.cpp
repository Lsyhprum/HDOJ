# include <iostream>

using namespace std;

const int maxn = 60;
long long dp[maxn];

int main(){
    int n, a, b;
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= 50; i ++)
        dp[i] = dp[i-1] + dp[i-2];
    
    while(cin >> n){
        while(n --){
            cin >> a >> b;
            cout << dp[b-a] << "\n";
        }
    }
    return 0;
}