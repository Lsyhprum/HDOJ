# include <iostream>
# include <cstring>

using namespace std;

int cow[4];   // cow[0],[1],[2] 第一，二，三年 cow[4] 大于四年

int main(){
    int n;
    while(cin >> n, n){
        memset(cow, 0, sizeof(cow));
        cow[3] = 1;   // 模拟初始情况

        for(int i = 1; i < n; i ++){
            cow[3] += cow[2];
            cow[2] = cow[1];
            cow[1] = cow[0];
            cow[0] = cow[3];
        }

        cout << cow[0] + cow[1] + cow[2] + cow[3] << endl;
    }
    return 0;
}