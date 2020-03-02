# include <iostream>
# include <math.h>

using namespace std;

const double unit = sqrt(2);

double fun(int x, int y){
    int step = x + y;
    double ans = 0;
    if(step <= 1 && x == 0){
        ans = y;
    }else{
        ans = 1;
        double tmp = unit * (1 + step) * step / 2; // 点间距离
        tmp -= (step - x) * unit;
        ans += tmp;

        for(int i = 2; i <= step; i ++){
            ans += sqrt(i * i + (i-1) * (i-1));
        }
    }

    return ans;
}

int main(){
    int n, x1, y1, x2, y2;
    cin >> n;

    while(n -- ){
        cin >> x1 >> y1 >> x2 >> y2;
        printf("%.3f\n", abs(fun(x1, y1) - fun(x2, y2))); // \n 易丢失
    }
    return 0;
}