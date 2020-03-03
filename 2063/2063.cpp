# include <iostream>
# include <cstring>
# include <algorithm>

using namespace std;

struct stu{
    int id;
    int num;      // 可搭档人数
};

const int maxn = 510;
bool dp[maxn][maxn];
stu boy[maxn];
stu girl[maxn];

bool cmp (stu a, stu b){
    return a.num < b.num;
}

int main(){
    int k, m, n, g, b;

    while(cin >> k, k){
        cin >> m >> n;       // m 女 n 男

        int ans = 0;
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= n; i ++){
            boy[i].id = i;
            boy[i].num = 0;
        }
         for(int i = 1; i <= m; i ++){
            girl[i].id = i;
            girl[i].num = 0;
        }
        
        while(cin >> g >> b){
            dp[g][b] = true;
            boy[b].num ++;
            girl[g].num ++;
        }

        sort(boy + 1, boy + n, cmp);
        sort(girl + 1, girl + m, cmp);

        for(int i = 1; i <= n; i ++){         // 从最少的入手
            if(boy[i].num != 0){              // 存在人选
                int MIN = n + 1;
                int pos = 0;
                for(int j = 1; j <= m; j ++){
                    
                }
            }
        }
    }
    return 0;
}