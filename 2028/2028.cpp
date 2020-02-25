# include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int n;
    while(cin >> n){
        int ans = 1, tmp;
        while(n --){
            cin >> tmp;
            ans = tmp / gcd(ans, tmp) * ans;
        }
        cout << ans << endl;
    }
    
    return 0;
}