# include <iostream>

using namespace std;

int main(){
    int n, tmp, ans;
    while(scanf("%d", &n), n){
        ans = 0;
        while(n --){
            scanf("%d", &tmp);
            ans ^= tmp;
        }
        printf("%d\n", ans);
    }
    return 0;
}