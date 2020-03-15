# include <iostream>
# include <math.h>

using namespace std;

int main(){
    int t, h, m, s, ans;
    float hp, mp;
    cin >> t;

    while(t --){
        cin >> h >> m >> s;
        // 1h -> 30 d
        // 1m -> 30 / 60
        // 1s -> 30 / 60 * 60
        hp = (h % 12) * 30 + (m * 30.0f / 60) + (s * 30.0f / (60 * 60));
        //cout << hp << endl;
        // 1 min -> 6 d
        // 1 s -> 6 / 60
        mp = m * 6 + s * 6.0f / 60;
        //cout << mp << endl;

        int ans = floor(fabs(hp - mp) < 180 ? fabs(hp - mp) : 360 - fabs(hp-mp));

        cout << ans << "\n";
    }
    return 0;
}