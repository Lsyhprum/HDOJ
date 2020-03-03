# include <iostream>

using namespace std;

const int maxn = 260;
int coins[5] = {50, 25, 10, 5, 1};
long long dp[maxn];

int main(){
    int n;
    dp[0] = 1;
    for(int i = 1; i <= 250; i++){
        for(int j = 0; j < 5; j ++){
            if(i < coins[j]){
                continue;
            }else{
                dp[i] += dp[i - coins[j]];
            }
        }
    }
    for(int i = 1; i <= 20; i ++)
        cout << dp[i] << endl;
    while(cin >> n){
        cout << dp[n] << "\n";
    }
    return 0;
}