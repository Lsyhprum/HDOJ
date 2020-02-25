# include <iostream>
# include <algorithm>
# include <iomanip>

using namespace std;

int main(){
    int n, tmp;
    while(cin >> n){
        double sum = 0;
        double MAX = 0;
        double MIN = 100;
        for(int i = 0; i < n; i ++){
            cin >> tmp;
            sum += tmp;
            if(tmp > MAX)
                MAX = tmp;
            if(tmp < MIN)
                MIN = tmp; 
        }
        cout << fixed << setprecision(2) << (sum - MAX - MIN) / (n - 2) << endl;
    }

    return 0;
}