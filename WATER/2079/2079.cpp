# include <iostream>
# include <cstring>

using namespace std;

const int maxa = 9;         // 学分种类
const int maxb = 11;        // 相同学分最多课目个数
int A[maxa];
int dp[maxa][maxb];             // 使用该学分科目个数

int main(){
    // n 总学分
    // k k种学分
    // 学分a（1-8） 有 b 门
    int t, n, k, a, b;
    cin >> t;

    while(cin >> n >> k){
        memset(A, 0, sizeof(A));
        memset(dp, 0, sizeof(dp));

        while(k --){
            cin >> a >> b;
            A[a] = b;
        }

        for(int i = 1; i < maxa; i ++){
            for(int j = 1; j < maxb; j ++){
                if()
            }
        }
    }
    return 0;
}