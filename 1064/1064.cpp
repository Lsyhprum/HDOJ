# include <iostream>
# include <iomanip>

using namespace std;

int main(){
    double sum = 0;
    double t;
    int month = 12;
    
    while(month --){
        cin >> t;
        sum += t;
    }

    cout << "$" << fixed << setprecision(2) << sum / 12 << endl;
    
    return 0;
}