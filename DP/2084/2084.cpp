# include <iostream>
# include <cstring>

using namespace std;

const int maxn = 110;

int dp[maxn][maxn];

int max(int a, int b){
    if(a > b) return a;
    else return b;
}

int main(){
    int c, n;

    cin >> c;

    while(c --){
        cin >> n;
        memset(dp, 0, sizeof(dp));
        cin >> dp[1][1];
        for(int i = 2; i <= n; i ++){
            for(int j = 1; j <= i; j ++){
                cin >> dp[i][j];
                dp[i][j] += max(dp[i-1][j-1], dp[i-1][j]); 
            }
        }

        int M = dp[n][1];
        for(int i = 2; i <= n; i ++){
            M = max(M, dp[n][i]);
        }

        printf("%d\n", M);
    }


    return 0;
}