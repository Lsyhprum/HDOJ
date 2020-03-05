# include <iostream>

using namespace std;

int main(){
    long long n, x;
    char c;
    cin >> n;

    while(n --){
        cin >> c >> x;
        long long ans = x;
        if(c >= 'a' && c <= 'z'){
            ans -= (c - 'a' + 1);
        }else{
            ans += (c - 'A' + 1);
        }
        cout << ans << "\n";
    }
    return 0;
}