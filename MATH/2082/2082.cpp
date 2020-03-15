// 原思路：
// 所有字母以字典序排列
// 思路：选择一个字母为开头，数量 = 长度-1 该字母 >= 所有可能（限制：该字母数量/价值）
// [长度][以某字母开头]
// 转移方程 ： dp[i][j] = dp[i-1][j] + dp[i-1][j + 1] + ... + dp[i-1][26];
// 条件：1. dp[i][j] <= 50
//       2. 
// 卡在了种类上

// 参考思路1：
// dp[i][j]  有 i 种字母，j 价值

# include <iostream>
# include <cstring>

using namespace std;

const int maxv = 51;
const int maxa = 27;
int dp[maxa][maxv];   
int num[maxa];   

int main(){
    int n;
    cin >> n;

    while(n --){
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= 26; i ++)
            cin >> num[i];

        dp[0][0] = 1;
        for(int i = 1; i <= 26; i ++){
            for(int j = 0; j <= 50; j ++){
                for(int k = 0; k <= num[i] && j >= i * k; k ++){
                    dp[i][j] += dp[i-1][j - i*k];
                }
            }
        }

        int ans = 0;
        for (int i = 1; i <= 50; i++)
            ans += dp[26][i];  //计算总价值1到50的总的组合数
        cout << ans << endl;
    }

    return 0;
}