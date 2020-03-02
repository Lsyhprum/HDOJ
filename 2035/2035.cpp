# include <iostream>
# include <math.h>

using namespace std;

int main(){
    int a, b;

    while(cin >> a >> b, a || b){
        if(b == 1)
            cout << a << endl;
        else{
            int ans = 1;
            while(b --){
                ans *= (a % 1000);
                ans %= 1000;
            }
            cout << ans << endl;
        }

    }

    return 0;
}