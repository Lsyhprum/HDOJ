# include <iostream>
# include <cstring>

using namespace std;

int dp[8][10] = {};

void init(){
    memset(dp, 0, sizeof(dp));

    dp[0][0] = 1;
    for(int i = 1; i < 8; i ++){                   // 位數
        for(int j = 0; j <= 9; j ++){               // 首位
            for(int k = 0; k <= 9; k ++){           // 位數減一各首位
                if(!(j == 6 && k == 2) && j != 4){
                    dp[i][j] += dp[i-1][k];
                }
            }
        }
    }
}

int fun(int x){
    int len = 0, digit[10];

    while(x){
        digit[++len] = x % 10;
        x /= 10;
    }
    digit[len + 1] = 0;

    int cnt = 0;
    for(int i = len; i >= 1; i --){
        for(int j = 0; j < digit[i]; j ++){
            if(j != 4 && !(digit[i+1] == 6 && j == 2))
                cnt += dp[i][j];
        }
        if(digit[i] == 4 || (digit[i+1] == 6 && digit[i] == 2))
            break;
    }

    return cnt;
}

int main(){
    int n, m;

    init();

    while(cin >> n >> m, n || m){
        cout << fun(m + 1) - fun(n) << "\n"; 
    }

    return 0;
}