# include <iostream>
# include <algorithm>

using namespace std;

const int maxn = 50;
int dif[maxn];    // 难度
int dp[maxn];      // 难度差

bool cmp(int a, int b){
    return a > b;
}
int main(){
    int t, n, m, ans = 0;

    while(cin >> t >> n >> m){
        for(int i = 0; i < n; i ++)
            cin >> dif[i];
        
        sort(dif, dif + n, cmp);

        


    }

    return 0;
}