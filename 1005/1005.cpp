# include <iostream>

using namespace std;

const long long int maxn = 100000010;
int f[maxn];

int main(){
    int a, b, n;
   
    while(cin >> a >> b >> n, a || b || n){
        f[1] = 1;
        f[2] = 1;
        for(int i = 3; i <= n; i ++){
            f[i] = ((a * f[i-1] + b * f[i-2]) % 7);
        }
        cout << f[n] << "\n";
    }
    return 0;
}