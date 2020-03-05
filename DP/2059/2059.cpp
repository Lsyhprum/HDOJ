# include <iostream>
# include <algorithm>

using namespace std;

const int maxn = 110;
int l, n, c, t, vr, vt1 , vt2;
int p[maxn];
int next = 0;

double recursion(double pos, int next){        // next 下一个充电 pos 距起点位置 
    if(pos >= l) return 0;    // 超过终点
    
    double tmp = 0;
    double dis = 0;

    return recursion(pos + dis) + fast;        // 下一路段最快 + 这一路段最快时间
}

int main(){
    while(cin >> l){
        cin >> n >> c >> t;
        cin >> vr >> vt1 >> vt2;
        for(int i = 0; i < n; i ++)
            cin >> p[i];

        double tr = l / vr;                     // 兔子时间
        double tt = recursion(l, 0);           // 乌龟时间

        if(tr > tt){
            cout << "What a pity rabbit!\n";
        }else{
            cout << "Good job,rabbit!\n";
        }
    }
    return 0;
}