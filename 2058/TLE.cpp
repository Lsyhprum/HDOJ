# include <iostream>

using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m, n || m){
        for(int i = 1; i <= n; i ++){
            if(m % i == 0 && (m / i) % 2 == 1){  // 是 m 的因子
                int dis = (m / i) / 2;
                if(i - dis >= 1 && i + dis <= n){
                    printf("[%d,%d]\n", i-dis, i+dis);
                }
            }
            if(m % (2*i + 1) == 0){
                int dis = m / (2*i+1);
                if(i - dis + 1 >= 1 && i + dis <= n){
                    printf("[%d,%d]\n", i-dis+1, i+dis);
                }
            }
        }
        printf("\n");
    }
    return 0;
}