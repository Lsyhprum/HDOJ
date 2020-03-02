# include <iostream>
# include <cstring>

using namespace std;

const int maxn = 50;
int dp[maxn];

int main(){
    int n, m;
    cin >> n;

    while(n --){
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        dp[1] = 1;

        cin >> m;
        if(m == 1){
            cout << 0 << endl;
            continue;
        }
        for(int i = 2; i <= m; i ++)
            dp[i] = dp[i - 1] + dp[i - 2];
        
        cout << dp[m - 1] << endl;
    }
    return 0;
}