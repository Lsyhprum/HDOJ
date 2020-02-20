# include <iostream>
# include <iomanip>

using namespace std;

int main(){
    int t, a, b;
    cin >> t;
    
    char op;
    while(t --){
        double result = 0;
        cin >> op >> a >> b;
        if(op == '+'){
            cout << a + b << endl;
        }else if(op == '-'){
            cout << a - b << endl;
        }else if(op == '*'){
            cout << a * b << endl;
        }else{
            if(a % b == 0){
                cout << a / b << endl;
            }else{
                cout << fixed << setprecision(2) << (double)a / b << endl;
            }
            
        }
    }
    
    return 0;
}