# include <iostream>
# include <math.h>

using namespace std;

int main(){
    int m, a, b;
    cin >> m;
    while(m --){
        cin >> a >> b;

        int tmpA = 0;
        for(int i = 1; i < a; i ++){  // <= 易错
            if(a % i == 0) tmpA += i;
        }

        int tmpB = 0;
         for(int i = 1; i < b; i ++){  // <= 易错
            if(b % i == 0) tmpB += i;
        }

        if(tmpA == b && tmpB == a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}