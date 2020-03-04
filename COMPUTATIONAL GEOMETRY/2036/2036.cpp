# include <iostream>
# include <math.h>

using namespace std;

double tri[3][2];

// double area(){
//     double a = sqrt((tri[0][0] - tri[1][0])*(tri[0][0] - tri[1][0])+(tri[0][1] - tri[1][1])*(tri[0][1] - tri[1][1]));
//     double b = sqrt((tri[0][0] - tri[2][0])*(tri[0][0] - tri[2][0])+(tri[0][1] - tri[2][1])*(tri[0][1] - tri[2][1]));
//     double c = sqrt((tri[1][0] - tri[2][0])*(tri[1][0] - tri[2][0])+(tri[1][1] - tri[2][1])*(tri[1][1] - tri[2][1]));
//     double p = (a + b + c) / 2;
//     return sqrt(p*(p-a)*(p-b)*(p-c));
// }

double area(double x0, double y0, double x1,double y1, double x2,double y2){
   return (x0*y1 + x2*y0 + x1*y2 - x2*y1 - x0*y2 - x1*y0 ) / 2;		
}


int main(){
    int n;
    while(cin >> n, n){
        double ans = 0;
        for(int i = 0; i < 2; i ++)
            cin >> tri[i % 3][0] >> tri[i % 3][1];
        for(int i = 2; i < n; i ++){
            cin >> tri[2][0] >> tri[2][1];

            ans += area(tri[0][0], tri[0][1], tri[1][0], tri[1][1], tri[2][0], tri[2][1]);
            tri[1][0] = tri[2][0];
            tri[1][1] = tri[2][1];
        }
        printf("%.1f\n", ans);
    }

    return 0;
}