# include <iostream>
# include <math.h>

using namespace std;

const double eps = 1e-8;
int main(){
    double A, B;
    while(cin >> A >> B){
        if(fabs(A - B) < eps){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}