# include <iostream>
# include <math.h>

using namespace std;

const int maxn = 510;
int pos[maxn];

int main(){
    int m, n;
    cin >> m;

    while(m --){
        cin >> n;
        for(int i = 0; i < n; i ++){
            scanf("%d", &pos[i]);
        }

        int MIN = 0;
        for(int i = 0; i < n; i ++){
            int dis = 0;
            for(int j = 0; j < n; j ++){
                dis += abs(pos[i]- pos[j]);
            }
            if(i == 0 || MIN > dis){
                MIN = dis;
            }
        }

        printf("%d\n", MIN);
    }
    return 0;
}